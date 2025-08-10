#include <stdio.h>
#include <time.h>

int dicho_classique(int x, int v[], int n) {
    int haut = n - 1;
    int bas = 0;
    int milieu;
    while (bas <= haut) {
        milieu = (haut + bas) / 2;
        if (x < v[milieu]) {
            haut = milieu - 1;
        } else if (x > v[milieu]) {
            bas = milieu + 1;
        } else {
            return milieu;
        }
    }
    return -1;
}

int dicho_opt(int x, int v[], int n) {
    int bas = 0;
    int haut = n - 1;
    int milieu;
    while (bas <= haut) {
        milieu = (bas + haut) / 2;
        if (x == v[milieu]) return milieu;
        if (x < v[milieu]) haut = milieu - 1;
        else bas = milieu + 1;
    }
    return -1;
}

int main() {
    const int N = 1000000; // size of table
    int tab[N];
    for (int i = 0; i < N; i++) tab[i] = i * 2; // sorted table

    int val = 1999998; // searched value(end of the table)
    clock_t start, end;
    double t1, t2;

    // Mesure dicho_classique
    start = clock();
    for (int i = 0; i < 1000000; i++) { //repeat to amplify the difference
        dicho_classique(val, tab, N);
    }
    end = clock();
    t1 = (double)(end - start) / CLOCKS_PER_SEC;

    // Mesure dicho_opt
    start = clock();
    for (int i = 0; i < 1000000; i++) {
        dicho_opt(val, tab, N);
    }
    end = clock();
    t2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("time dicho_classic : %f secondes\n", t1);
    printf("time dicho_opt     : %f secondes\n", t2);

    return 0;
}