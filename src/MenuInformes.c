/*
 * MenuInformes.c
 *
 *  Created on: 10 abr. 2022
 *      Author: 54113
 */
#include <stdio.h>
#include <stdlib.h>
#include "MenuInformes.h"
#define BTC 4606954.55

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

void MostrarResultadosAereo(float *precioAero, float *precioCredAer, float *precioBTCaEREO)
{
	  printf("el precio con tarjeta debito Aereo: %.2f\n", *precioAero);
	  printf("el precio con c redito Aereo es : %.2f\n", *precioCredAer);
	  printf("el precio pagado con BTC es:%.8f\n",*precioBTCaEREO);
}
void MostrarResultados(float *precioLan, float *precioCred, float *precioBit)
{

   printf("el precio con tarjeta debito lan: %.2f\n", *precioLan);
   printf("el precio con c redito lan es : %.2f\n", *precioCred);
   printf("el precio pagado con BTC es:%.8f\n",*precioBit);
  // printf("el precio unitario es %.2f",precio);

}

void precioPagConBitAer(float precioAero,float *pResulAero3)
{

    float resul3;
    resul3 = precioAero/BTC;
    *pResulAero3=resul3;
}

void precioConTarCreAer(float precioAero,float *pResulAero2)
{
    float resul2;
    resul2=precioAero*0.25;
    *pResulAero2 = precioAero + resul2;
}

void precioConTarDebAer(float precioAero,float *pResulAero1)
{

    float resul;

     resul= precioAero *0.10;
    *pResulAero1 = precioAero - resul;

}


void precioPagConBitLan(float precioLan ,float *pResultado3)
{

	   float resul3;
	   resul3 = precioLan/BTC;
	   *pResultado3=resul3;

}

void precioConTarCreLan(float precioLan,float *pResultado2)
{
    float resul2;
    resul2=precioLan*0.25;
    *pResultado2 = precioLan + resul2;
}
void precioConTarDebLatan(float precioLan,float *pResultado)
{

    float resul;

        resul= precioLan *0.10;
        *pResultado = precioLan - resul;

}

int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    int bufferInt;
        if(pResultado!=NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >=0)
        {
            do
            {
                printf("%s",mensaje);
                scanf("%d",&bufferInt);
                if(bufferInt >= minimo && bufferInt <= maximo)
                {
                    *pResultado = bufferInt;
                    retorno = 0;
                    break;
                }
                else
                {
                    printf("%s",mensajeError);
                    reintentos--;
                }
            }while(reintentos >=0);
        }
    return retorno;
}
float utn_getNumeroFloat(float* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    float bufferfloat;
        if(pResultado!=NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >=0)
        {
            do
            {
                printf("%s",mensaje);
                scanf("%f",&bufferfloat);
                if(bufferfloat >= minimo && bufferfloat <= maximo)
                {
                    *pResultado = bufferfloat;
                    retorno = 0;
                    break;
                }
                else
                {
                    printf("%s",mensajeError);
                    reintentos--;
                }
            }while(reintentos >=0);
        }
    return retorno;
}
