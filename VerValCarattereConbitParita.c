#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80
int main(){
    char carattere[N], bin[N];
    int i, j, temp, cont, par;

    printf("Inserisci la stringa\n");
    gets(carattere);

    printf("La stringa alla fine di questa frase vale: FRASE  >>> ");
    puts(carattere);
    for(i = 0; i < strlen(carattere); i++){
        temp = (int)carattere[i];
        for(j = 0; temp >= 1; j++){
            bin[j] = temp % 2;
            temp = temp / 2;
        }
        temp = j;
        printf("\n%c %d ", carattere[i], (int)carattere[i]);
        for(j = temp; j >= 0; j--){
            printf("%d", bin[j]);
            if(bin[j] == 1){
                cont++;
            }
        }
        par = cont % 2;

        if(par == 0){
            printf(" La parita e' pari");
        }
        else{
            printf(" La parita e' dispari");
        }
            
    }
    printf("\n");
    system("pause");
}