#include <stdio.h>

#define inside 1
#define outside 0

int main(){
    int c, nl, nm, nc, etat;

    etat= outside;
    nl=nm=nc=0;
    while((c= getchar()) != EOF){
        ++nc;
        if(c=='\n'){
            ++nl;
        }
        if(c== ' ' || c== '\n' || c== '\t'){
            etat= outside;
        }
        else if(etat == outside){
            etat= inside ;
            ++nm;
        }
    }
    printf(" %d %d %d\n",nl,nm,nc);
    return 0;
}