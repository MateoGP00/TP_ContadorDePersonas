/*
 * estados.c
 *  Created on: 18 nov. 2024
 *      Author: mjgpi
 */
#include "conf.h"

estados_t f_boton(void){
	int B=0;
	B = leerPulsacion();
	if(B==1){
		return puertaCerrada;
	}
	else{
		return botonDeHabilitacion;
	}
}

estados_t f_puertaCerrada(void){
	int Cont, Lim;
	Cont = valorContador();
	Lim = valorLimite();
	cerrar();
	if(Cont < Lim){
		return puertaAbierta;
	}
	else{
		return puertaCerrada;
	}
}

estados_t f_puertaAbierta(void){
	int Cont, Lim;
	Cont = valorContador();
	Lim = valorLimite();
	abrir();
	if(Cont >= Lim){
		return puertaCerrada;
	}
	else{
		return puertaAbierta;
	}
}
