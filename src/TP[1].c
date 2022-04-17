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
#define BTC 4606954.55

int main(void){

    int opcion;
    float km=0;

    float precioAero=0;
    float preConTarAer;
    float precioDebiAer;
    float precioCredAer;
    float precioBitAer;

    float precioLan=0;
    float preConTarLan;
    float precioDebi;
    float precioCred;
    float precioBit;

    int respuesta;
    float lan;

    int flagIngresoKm =0;
    int flagIngresoVuelos=0;
    int flagCalculos=0;

   /*
    int flagIngresoKm =0;
    int flagIngresoVuelos =0;
    int flagCalculos =0;
   */
    do{

     respuesta = utn_getNumero(&opcion,"\nSelecciones una opcion\n\n"
    "1-ingrese Kilometros:\n (Km= x)\n"
    "2-Ingrese Precio de Vuelos:\n"" (Aerolineas =Y Latan =Z)\n"
    "3-Calcular todos los costos:\n"
    "a-Tarjeta de debito(descuento del 10 Porciento)\n"
    "b-Tarjeta de credito(Interes 25 Porciento)\nc-Bitcoin(1BTC->4606954.55 pesos Argentinos)\n"
    "d-Mostrar precio por Km (precio unitario)\n"
    "e-Mostrar diferencia de precio ingresado(Latan -Aerolineas)\n\n"
    "4-Informar Resultados\n""Latan:\na-precio con tarjeta de debito:\nb-preciocon tarjeta de credito:\n"
    "c-precio pagado con bitcoin:\nd-precio unitario:\n\nLa diferencia de precio es :\n5-Carga forzadade datos:\n6-salir \n","No es una opcion valida\n",1,6,2);
        if(!respuesta)
        {
            switch(opcion)
            {
                case 1:

                utn_getNumeroFloat(&km ,"\nIngrese kilometros a su destino","\nError,Ingrese un km valido",0,999999,3);
                flagIngresoKm =1;
                break;

                case 2:
                    if( flagIngresoKm ==1)
                    {
                        utn_getNumeroFloat(&precioAero,"\nIngrese precio del vuelo AEROLINEAS:","\nError , ingrese un valor",0,999999,3);
                        utn_getNumeroFloat(&precioLan,"\nIngrese precio del vuelo LAN:","\nError , ingrese un valor",0,999999,3);

                         flagIngresoVuelos=1;

                    }
                    else
                    {
                        printf("Antes de Ingresar los precios se deben ingresar los KM\n");
                    }

                break;
                case 3:

                    if(flagIngresoVuelos == 1)
                    {
                         precioConTarDebLatan(precioLan, &lan);
                         precioConTarCreLan(precioLan,&precioCred);
                         precioPagConBitLan(precioLan,&precioBit);

                         flagCalculos= 1;
                    }
                    else
                    {
                        printf("Antes de Calcular se deben ingresar los precios\n");
                    }
                break;

                case 4:
                        if(flagCalculos ==1)
                        {
                           MostrarResultados(&lan,&precioCred,&precioBit);

                        }
                        else
                        {
                             printf("Antes de Mostrar se deben calcular los precios\n");
                        }
                break;
                case 5:

                break;
                case 6:
                    printf("SALIR\n");
                break;
            }
        }

    }while(opcion!=6);

    return 0;
}


}
