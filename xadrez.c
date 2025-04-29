#include <stdio.h>

int main() {

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
    

    return 0;
}
