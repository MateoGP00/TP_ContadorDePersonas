#ifndef CONFIG_
#define CONFIG_

#include <aplication.h>

typedef enum{
	botonDeHabilitacion = 0,
	puertaCerrada = 1,
	puertaAbierta = 2
}estados_t;

estados_t f_botonDeHabilitacion(void);
estados_t f_puertaCerrada(void);
estados_t f_puertaAbierta(void);

int leerPulsacion();
int valorContador();
int valorLimite();

#endif
