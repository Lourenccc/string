#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    /* 3) Desenvolva um programa que armazene o nome e o
    telefone de 5 pessoas. Ao digitar a posição desejada, o
    programa deve exibir o nome e telefone daquela posição. O
    programa finaliza ao receber a entrada -1*/

    char nome[5][25];
    char numero[5][12];
    int escolha;
    for(int i=0; i<5; i++){
        printf("insira o nome:\n");
        fgets(nome[i], 25, stdin);
        nome[i][strcspn(nome[i], "\n")] ='\0';   
        
        printf("Insira o numero\n");
        fgets(numero[i], 25, stdin);
        numero[i][strcspn(numero[i], "\n")] ='\0'; 
    } // coleta nome e numero

    printf("Escolha a pessoa a qual você precisa do telefone:\n");
    printf("%s = 1\n", nome[0]);
    printf("%s = 2\n", nome[1]);
    printf("%s = 3\n", nome[2]);
    printf("%s = 4\n", nome[3]);
    printf("%s = 5\n", nome[4]);
    printf("para finalizar digite '-1':\n"); //menu para podermos iniciar o switch
    
    scanf("%i", &escolha);
        
    switch (escolha){
    case 1:
        printf("%s", numero[0]);
    break;
    case 2:
        printf("%s", numero[1]);
    break;
    case 3:
        printf("%s", numero[2]);
    break;
    case 4:
        printf("%s", numero[3]);
    break;
    case 5:
        printf("%s", numero[4]);
    break;
    case -1:
    break;

    default:
        break;
    }

return 0;
}
