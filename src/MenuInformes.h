/*
 * MenuInformes.h
 *
 *  Created on: 10 abr. 2022
 *      Author: 54113
 */

#ifndef MENUINFORMES_H_
#define MENUINFORMES_H_

void MostrarResultados(float *precioLan, float *precioCred, float *precioBit);
void precioPagConBitLan(float precioLan, float *pResultado3);
void precioConTarCreLan(float precioLan,float *pResultado2);
void precioConTarDebLatan(float precioLan,float *pResultado);
int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
float utn_getNumeroFloat(float* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
void precioPagConBitAer(float precioAero, float *pResulAero3);
void precioConTarCreAer(float precioAero,float *pResulAero2);
void precioConTarDebAer(float precioAero,float *pResulAero1);
#endif /* MENUINFORMES_H_ */
int PedirNumeroEntero(char mensaje[]);
