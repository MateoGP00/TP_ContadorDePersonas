#include "conf.h"

estados_t f_bontonDeHabilitacion(void){
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
	if(Cont >= Lim){
		return puertaCerrada; 
	}
	else{
		return puertaAbierta;
	}
}
