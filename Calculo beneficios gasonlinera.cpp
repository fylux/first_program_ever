#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{

int vecinos, gasolineras, vecinost;    
float paga, preciocom, precioven, litros, dinero, beneficios;             

printf("Bienvenido al programa de calculo de benficio para su gasoloninera\n Responda a las siguien preguntas que se le plantearán\n");
printf("Introduzca el precio al que compra la gasolina\t");
scanf("%f", &preciocom);
printf("Introduzca el precio al que vende la gasolina\t");
scanf("%f", &precioven);
printf("Introduca el numero aproximado de vecinos de su localidad\t");
scanf("%i", &vecinost);
printf("Introduzca el numero de gasolineras que le puedan hacer compretencia\t");
scanf("%i", &gasolineras);
printf("Introduzca la paga que le da a sus empleados, si no paga a ninguno, es 0\t");
scanf("%f", &paga);
vecinos=vecinost*85/100*1/4;
litros=vecinos*40/gasolineras;
dinero=precioven-preciocom;
beneficios=litros*dinero-paga;             
printf("Sus beneficios mensuales seran %f aproximadamente", beneficios);

getch();
return 0;
}


