#include <stdio.h>

int main ()
{
    int N;
    printf("Calculo da soma dos primeiros N numeros.\n");

    printf("Indique N: ");
    scanf("%i", &N);

    int soma = 0;

    for(int i=0; i <= N; i++)
    {
        soma = soma + i;
        
        printf("adicionar %i, parcial %i\n", i, soma);
    }
    
    printf("Total: %i", soma);

}