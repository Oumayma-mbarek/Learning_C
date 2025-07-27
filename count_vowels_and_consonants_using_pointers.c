#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

//disclaimer: this program counts number of vowels correctly but considers everything else a consonant
//so spaces and other characters are considered consonants as well 

int main(){

    char * str= malloc(SIZE * sizeof(char));
    int nbc=0,nbv=0;
    char* pt= fgets(str,SIZE,stdin);
        while (*pt != '\0') {
            // Check if the current character is a vowel (both uppercase and lowercase)
            if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' || *pt == 'Y'||
                *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u' || *pt == 'y') {
                nbv++; // Increment vowel counter if the character is a vowel
            }
            else {
                nbc++; // Increment consonant counter for other characters
            }
            pt++; // Move the pointer to the next character in the string
        }
        printf("number of vowels is : %d and number of consonants is : %d\n",nbv,nbc);
        return 0;

}