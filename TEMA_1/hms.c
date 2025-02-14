#include <stdio.h>

int main ()
{
    int hora, minuto, segundo, total;

    printf("Calculo do numero de segundos desde o inicio do dia.\n\n");
    
    printf("Hora: ");
    scanf("%i", &hora);
    
    printf("Minuto: ");
    scanf("%i", &minuto);
    
    printf("Segundos: ");
    scanf("%i", &segundo);
    
    total = (hora * 60 * 60) + (minuto * 60) + segundo;
    printf("\nNumero de segundos desde o inicio do dia: %i\n", total);
}