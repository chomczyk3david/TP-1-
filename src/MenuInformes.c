/*
 * MenuInformes.c
 *
 *  Created on: 10 abr. 2022
 *      Author: 54113
 */
#include <stdio.h>
#include <stdlib.h>


int MenuInformes()
{
	int opciones;
	printf("1)Ingrese Kilometros:\n  (Km = x)\n"
			"2)Ingresar Precios de Vuelos:\n "
			" (Aerolineas = Y,Latan = Z)\n"
			"3)Calcular los Costos: \n"
			"  a)""Tarjeta de debito(descuento 10 porciento)\n"
			"  b)""Tarjeta de credito(interes 25 porciento)\n"
			"  c)""Bitcoin(1BTC-> 4606954.55 pesos Argentinos)\n"
			"  d)Mostrarprecio por Km(precio unitario)\n"
			"  e)Mostrar diferncia de precio ingresada(Latan-Aerolineas)\n"
			"4)Informar Resultados:\n "
			" LATAN:\n"
			"  a)Precio con tarjeta de debito:\n"
			"  b)Precio con tarjeta de credito:\n"
			"  c)Precio con bitcoin:\n"
			"  d)Precio Unitario:\n"
			"  AEROLINEAS\n"
			"  a)Precio con tarjeta de debito:\n"
			"  b)Precio con tarjeta de credito:\n"
			"  c)Precio con bitcoin:\n"
			"  d)Precio Unitario \n "
			"   La diferencia de precios es :\n"
			"5)Carga Forzada de Datos: \n"
			"6)Salir:\n"
			"	ELIJA LAS OPCIONES:  \n");
	scanf("%d",&opciones);



return opciones;
}
int PedirNumeroEntero(char mensaje[]){
    int numero;

    printf("%s\n",mensaje);
    scanf("%d",&numero);
    return numero;
}
