/*
 * conf.h
 *  Created on: 18 nov. 2024
 *      Author: mjgpi
 */
#ifndef CONF_H_
#define CONF_H_

#include "Aplication.h"

typedef enum{
	botonDeHabilitacion = 0,
	puertaCerrada = 1,
	puertaAbierta = 2
}estados_t;

estados_t f_boton(void);
estados_t f_puertaCerrada(void);
estados_t f_puertaAbierta(void);

int leerPulsacion();
int valorContador();
int valorLimite();
void abrir();
void cerrar();

#endif /* CONF_H_ */
