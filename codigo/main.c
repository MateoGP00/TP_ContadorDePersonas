#include "conf.h"
int main (){
	estados_t estado = botonDeHabilitacion;
	estados_t (*funcion[3])(void) = {f_botonDeHabilitacion, f_puertaCerrada, f_puertaAbierta};
	init_mcu();
	while(1) estado = (*funcion[estado])();
	return 0;
}
