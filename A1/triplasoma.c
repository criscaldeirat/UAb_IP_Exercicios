#include <stdio.h>

int main()
{
    int numero, soma = 0;

    scanf("%d", &numero);

    int i = numero - 2;

    while (i > 0)
    {
        int j = i;
        while (j > 0)
        {
            int k = numero - i - j; // Calcular k diretamente
            if (k > 0 && k <= j)    // Garantir que k é válido e k <= j
            {
                soma++;
            }
            j--;
        }
        i--;
    }
    printf("%d", soma);
}