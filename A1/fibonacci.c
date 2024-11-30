#include <stdio.h>

int main()
{
    int n, i=3, j=3;

    printf("Calculo do valor da funcao Fibonacci:\n");
    printf("Indique N:");
    scanf("%d", &n);

    if (n>0 && n<3)
    {
        printf("Resultado: %d\n", n);
        return 0;
    }

    int f1 = 1; // f(n-1) f(1)
    int f2 = 2; // f(n-2) f(2)
    int f = 0;

    while(i<=n && i>=3)
    {
        f = f1 + f2;
        printf("  Fib(%d)=%d\n", i, f);
        f1 = f2;
        f2 = f;
        i++;
    };

    printf("Resultado: %d\n", f);
}