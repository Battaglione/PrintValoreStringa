#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80
int main(){
    char carattere[N];
    int i;

    printf("Inserisci la stringa\n");
    gets(carattere);

    printf("La stringa alla fine di questa frase vale: FRASE  >>> ");
    puts(carattere);
    for(i = 0; i < strlen(carattere); i++){
        if(carattere[i] != 32){
            printf("\n%c %d", carattere[i], (int)carattere[i]);
        }
        else{
            printf("\n");
        }
    }
}