/*
 * funciones.c
 *  Created on: 18 nov. 2024
 *      Author: mjgpi
 */
#include "conf.h"

uint8_t cont = 0;
uint8_t flag = 0;

void init_mcu(){
	LPC_Init();
}

int leerPulsacion(){
	if(GetUserKEY() == 1){
		flag = 1;
	}
	return (int)flag;
}

int valorContador(){
	if(GetInputSENSORENTRADA() == 1){
		cont++;
	}
	if(GetInputSENSORSALIDA() == 1){
		cont--;
	}
	return (int)cont;
}

int valorLimite(){
	return 3;
}

void abrir(){
	GPIO_SetPIN(LedRED, LED_OFF);
	GPIO_SetPIN(LedGREEN, LED_ON); // LED VERDE representa puerta abierta
	//GPIO_SetPIN(0, PUERTA, 0);      PUERTA seria igual a algun pin de la placa
}

void cerrar(){
	GPIO_SetPIN(LedGREEN, LED_OFF);
	GPIO_SetPIN(LedRED, LED_ON); // LED ROJO representa puerta cerrada
	//GPIO_SetPIN(0, PUERTA, 1);    PUERTA seria igual a algun pin de la placa
}
