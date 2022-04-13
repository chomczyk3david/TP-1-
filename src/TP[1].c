/*
 ============================================================================
 Name        : TP[1].c
 Author      : david
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MenuInformes.h"
int calcularCostos(int tarjAero, int tarjLat);

int main(void){
	int opciones = 0;
	int km;
	int PrecioVueloA;
	int PrecioVueloL;
	int Precio;
	setbuf(stdout,NULL);


	 do{
		 switch(MenuInformes())
		 {

		 case 1:
			 printf("Ingrese kilometros a recorrer");
			 scanf("%d",&km);
			 printf(" quilometros a recorre seran : %d\n",km);
		 break;
		 case 2:
			 printf("Ingrese Pecio de Vuelos AEROLINEAS:");
			 scanf("%d",&PrecioVueloA);

			 printf("Ingrese Pecio de Vuelos LATAM:");
			 scanf("%d",&PrecioVueloL);
		 break;
		 case 3:

		 break;


		 default:
				printf("||hasta pronto||\n");
				system("PAUSE");
		 break;

		 }

	 }while(opciones!=6);


	return EXIT_SUCCESS;
}
