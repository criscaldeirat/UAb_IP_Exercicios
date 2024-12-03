#include <stdio.h>
#include <math.h>

int main ()
{
    int k;

    scanf("%d", &k);

    int i = k;
    
    double somatorio = 0.0;

    // Calculo do somatorio
    int j = 0;
    while(j <= k)
    {
        double soma = 0.0;
        // Calculo do fatorial k!
        double fatorial = 1.0;
        int n = j;
        while(n > 0)
        {
            fatorial *= n;
            n--;
        }

        // Calculo de (4k)!
        double fatorial_4k = fatorial * 4;
        
        // Calculo do fatorial (n!)^4
        double pow_fatorial = pow(fatorial, 4);
        
        // Calculo do 396^4k
        double pow_4k = pow(396, 4 * j);

        soma = fatorial_4k * (1103 + 26390 * j);
        soma = soma / (pow_fatorial * pow_4k);

        somatorio += soma;
        j++;
    }

    // Calculo da raiz de 2
    double raiz = sqrt(2);

    // Calculo do somatorio com a 1 parte da formula
    double parte_1 = (2 * raiz) / 9801;
    somatorio *= parte_1;

    double pi = 1 / somatorio;

    printf("%.17f\n", pi);
}