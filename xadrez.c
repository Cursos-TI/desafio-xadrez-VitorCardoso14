#include <stdio.h>

int main() {

    int moveCavalo;

//usando while para Torre se mover
    printf("Bispo:\n");
    int b = 1;
    while (b <= 5)
    {
    printf("Cima, Direita\n");
    b++;
    }

//usando o do while para Rainha se mover
    printf("Rainha:\n");
    int r = 1;
    do
    {
    printf("Esquerda\n");
    r++;
    } while (r <= 8);
    
    
//usando for para Torre se mover
        printf("Torre:\n");
    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n");
    }


     printf("Mova o cavalo:\n");
     printf("1.Direita.\n");
     printf("2.Esquerda.\n");
     scanf("%d", &moveCavalo);


switch (moveCavalo)
{
case 1:
    //usando loop aninhado para mover o cavalo
    printf("Cavalo:\n");
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
        printf("Cima\n");
        }
        printf("Direita\n");
    }
    break;
case 2:
    //usando loop aninhado para mover o cavalo
    printf("Cavalo:\n");
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
        printf("Cima\n");
        }
        printf("Esquerda\n");
    }
    break;
default:
    printf("Movimento Invalido\n");
    break;
}


    return 0;
}
