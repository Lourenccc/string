#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

    //só para testar a função string

    char nome[25];

    printf("Tente advinhar a cachorra que eu comi ontem\n");
    fgets(nome, 25, stdin);
    nome [strcspn (nome, "\n")] = '\0';

    if (strcmp (nome, "Liline") == 0 || strcmp (nome, "liliane") == 0) {

        printf ("isso mesmo, eu comi a safada da %s\n", nome);
    } else {

        printf ("NUNCA COMERIA ESSA SAFADA DA %s\nMeu amor é da cachorra da Liliane (meu pau também)\n", nome);
    }



    return 0;
}//main  
