#pragma once
#include "Carta.h"
class Lista
{
public:
	Carta* carta1;
	int cantidad;

	Lista();
	void agregar_carta(int num2, char color2);
	void quitar_carta(int posicion);
	Carta obtener_carta(int posicion1);
};

