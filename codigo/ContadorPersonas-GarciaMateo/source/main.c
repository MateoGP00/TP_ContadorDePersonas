/*
 * main.c
 *  Created on: 18 nov. 2024
 *      Author: mjgpi
 */
#include "conf.h"

uint32_t tick = 0;

int main (){
	estados_t estado = botonDeHabilitacion;
	estados_t (*funcion[3])(void) = {f_boton, f_puertaCerrada, f_puertaAbierta};
	init_mcu();
	while(1) estado = (*funcion[estado])();
	return 0;
}
