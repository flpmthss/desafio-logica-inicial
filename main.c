#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
    printf("Ola, heroi! Seja bem vindo.\n");

    char nome[15];

    printf("Como voce se chama?\n");
    scanf("%14s", nome);
    sleep(2);

    printf("Prazer em conhece-lo, %s\n", nome);

    printf("Iremos avaliar sua experiencia e gerar sua placa de nivel conforme a experiencia que voce possui.\n");

    int experiencia;
    char placa[20];

    while (1) {
        printf("Por favor, digite sua de experiencia (1-12000): ");

        if (scanf("%d", &experiencia) != 1) {            
            printf("Cara... Numeros... 1, 2, 3... Ta dificil?\n");
            while(getchar() != '\n');
            continue;
        }

        while(getchar() != '\n');

        if(experiencia < 1 || experiencia > 12000){
            printf("Voce entende seu nivel de experiencia ou precisarei explicar? Porfavor, digite o valor real.\n");
            continue;
        }

        break;
    }

    printf("\nAvaliando experiencia...\n");
    sleep(5);

    if(experiencia <= 1000){
        strcpy(placa, "Ferro");
    } else if(experiencia > 1000 && experiencia < 2001){
        strcpy(placa, "Bronze");
    } else if(experiencia > 2000 && experiencia < 5001){
        strcpy(placa, "Prata");
    } else if(experiencia > 5000 && experiencia < 8001){
        strcpy(placa, "Ouro");
    } else if(experiencia > 8000 && experiencia < 9001){
        strcpy(placa, "Platina");
    } else if(experiencia > 9000 && experiencia < 10001){
        strcpy(placa, "Diamante");
    } else if(experiencia > 10000 && experiencia < 12001){
        strcpy(placa, "Mestre");
    } else{
        printf("\nCara... Voce ultrapassou o limite de experiencia.\n");
    }

    printf("\nParabens! Voce esta no %s.\n", placa);
    sleep(2);
    printf("\nAqui esta o quadro com missoes para o nivel %s.\n", placa);

    return 0;
}