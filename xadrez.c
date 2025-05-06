#include <stdio.h>

//void para fazer a recursividade
void moveBispo(int bispo){
if (bispo > 0){
    printf("Cima\n");
    moveBispo(bispo - 1);
  }
}
void moveBispod(int bispod){
    if (bispod > 0){
    printf("Direita\n");
    moveBispod(bispod - 1);
   }
}
void moveRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        moveRainha(rainha - 1);
      }
    }
void moveTorre(int torre){
    if (torre > 0){
        printf("Direita\n");
        moveTorre(torre - 1);
      }
        }

int main() {

//recursividade

printf("-Bispo:\n");
moveBispo(5);
moveBispod(5);

printf("-Rainha:\n");
moveRainha(8);

printf("-Torre:\n");
moveTorre(5);

//loop aninhado para o bispo

printf("-Bispo:\n");


for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
        printf("Cima\n");
        }
        printf("Direita\n");
    }

    int moveCavalo, i = 1;

//usando continue e break no cavalo

    printf("-Cavalo:\n");
for (int i = 0; i < 1; i++)
{
for (int j = 1; j < 3; j++)
{
    if (i == 1) continue;
    if (i == 3) break;
    printf("Direita\n");
}
printf("Cima\n");
}



//usando while para Torre se mover
 /*
    printf("Bispo:\n");
    int b = 1;
    while (b <= 5)
    {
    printf("Cima, Direita\n");
    b++;
    }
*/

//usando o do while para Rainha se mover
/*
    printf("Rainha:\n");
    int r = 1;
    do
    {
    printf("Esquerda\n");
    r++;
    } while (r <= 8);
*/
    
//usando for para Torre se mover
/*
        printf("Torre:\n");
    for (int t = 0; t < 5; t++)
    {
        printf("Direita\n");
    }
*/

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
