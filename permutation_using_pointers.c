#include <stdio.h>
#include <string.h>

void changePosition(char *ch1, char *ch2){
    char tmp;
    tmp= *ch1;
    *ch1=*ch2;
    *ch2=tmp;
}

void Permuchar(char * ch, int stno, int endno){
    int i;
    if(stno==endno){
        printf("%s\n",ch);
        /*
        for (int j=0; j<endno; j++) printf ("%c ", *(ch +j));
		printf ("\n");
        */
    }
    else{
        for(i=stno;i<=endno;i++){
            changePosition((ch+stno),(ch+i));
            Permuchar(ch,stno+1,endno);
            changePosition((ch+stno),(ch+i));
        }
        
    }
}

int main()
{
    char str[] = "abcd"; // The input string
    printf("\n\n Pointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");
    int n = strlen(str); // Get the length of the string
    printf(" The permutations of the string are : \n");
    Permuchar(str, 0, n -1); // Call function to generate permutations
    printf("\n\n");
    return 0;
}
/*int main(){
    printf("choose a string\n");
    char s;
    char  *str=&s;
    scanf("%s",str);
    int n=0;
    while(*(str+n) != '\0'){
        n++;
    }
   
    printf("the permutations of the string are: \n");
    Permuchar(str,0,n-1);
    printf("\n");
    return 0;

}
*/
