#include <stdio.h>

int main()
{
    float montante;
    int dois = 0, um = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, doiscent = 0, umcent = 0;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", &montante);
    
    montante += 0.005;
    
    while(montante >= 2)
    {
        montante -= 2;
        dois++;
    };
    
    if(dois > 0)
    {
        printf("2 euros: %d\n", dois);
    };

    while(montante >= 1)
    {
        montante -= 1;
        um++;
    };

    if(um > 0)
    {
        printf("1 euro: %d\n", um);
    };

    while(montante >= 0.5)
    {
        montante -= 0.5;
        cinquenta++;
    };

    if(cinquenta > 0)
    {
        printf("50 centimos: %d\n", cinquenta);
    };
    
    while(montante >= 0.2)
    {
        montante -= 0.2;
        vinte++;
    };

    if(vinte > 0)
    {
        printf("20 centimos: %d\n", vinte);
    };

    while(montante >= 0.1)
    {
        montante -= 0.1;
        dez++;
    };

    if(dez > 0)
    {
        printf("10 centimos: %d\n", dez);
    };

    while(montante >= 0.05)
    {
        montante -= 0.05;
        cinco++;
    };

    if(cinco > 0)
    {
        printf("5 centimos: %d\n", cinco);
    };

    while(montante >= 0.02)
    {
        montante -= 0.02;
        doiscent++;
    };

    if(doiscent > 0)
    {
        printf("2 centimos: %d\n", doiscent);
    };

    while(montante >= 0.01)
    {
        montante -= 0.01;
        umcent++;
    };

    if(umcent > 0)
    {
        printf("1 centimo: %d\n", umcent);
    };
}