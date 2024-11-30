#include <stdio.h>

int main()
{
    int horas, minutos, segundos, total=0;
    printf("Calculo do numero de segundos desde o inicio do dia.\nHora: ");
    scanf("%d", & horas);
    printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);

    total = horas*60*60 + minutos*60 + segundos;
    printf("Numero de segundos desde o inicio do dia: %d", total);

};