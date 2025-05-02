#include <stdio.h>

int main() {

    int moveCavalo, i = 1;

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
     printf("1.Cima, Cima e Direita.\n");
     printf("2.Cima, Cima e Esquerda.\n");
     printf("3.Baixo, Baixo e Direita.\n");
     printf("4.Baixo, Baixo e Esquerda.\n");
     printf("5.Direita, Direita e Cima.\n");
     printf("6.Direita, Direita e Baixo.\n");
     printf("7.Esquerda, Esquerda e Cima.\n");
     printf("8.Esquerda, Esquerda e Baixo.\n");
     scanf("%d", &moveCavalo);


switch (moveCavalo)
{
case 1:
    //usando loop aninhado for para mover o cavalo
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
    //usando loop aninhado for para mover o cavalo
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
case 3:
    //usando loop aninhado while para mover o cavalo
    printf("Cavalo:\n");
    
    while (i <= 1)
    {int j = 1;
        while (j <= 2)
        {
        printf("Baixo\n"); ++j; 
        }
        printf("Direita\n"); ++i;
    }
    break;
    case 4:
    //usando loop aninhado while para mover o cavalo
    printf("Cavalo:\n");
    
    while (i <= 1)
    {int j = 1;
        while (j <= 2)
        {
        printf("Baixo\n");
        ++j; 
        }
        printf("Esquerda\n");
        ++i;
    }
    break;
    case 5:
    //usando loop aninhado do while para mover o cavalo
    printf("Cavalo:\n");

    do
    {int j = 1;
        do
        {
        printf("Direita\n");
        ++j; 
        } while (j <= 2);
        printf("Cima\n");
        ++i;
    } while (i <= 1);
    break;
    case 6:
    //usando loop aninhado do while para mover o cavalo
    printf("Cavalo:\n");

    do
    {int j = 1;
        do
        {
        printf("Direita\n");
        ++j; 
        } while (j <= 2);
        printf("Baixo\n");
        ++i;
    } while (i <= 1);
    break;
    case 7:
    //usando loop aninhado do while para mover o cavalo
    printf("Cavalo:\n");

    do
    {int j = 1;
        do
        {
        printf("Esquerda\n");
        ++j; 
        } while (j <= 2);
        printf("Cima\n");
        ++i;
    } while (i <= 1);
    break;
    case 8:
    //usando loop aninhado do while para mover o cavalo
    printf("Cavalo:\n");

    do
    {int j = 1;
        do
        {
        printf("Esquerda\n");
        ++j; 
        } while (j <= 2);
        printf("Baixo\n");
        ++i;
    } while (i <= 1);
    break;
default:
    printf("Movimento Invalido\n");
    break;
}


    return 0;
}
