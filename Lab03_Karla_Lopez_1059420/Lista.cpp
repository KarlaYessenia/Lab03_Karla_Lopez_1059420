#include "Lista.h"
Lista::Lista(){
	carta1 = nullptr;
	cantidad = 0;
}
void Lista::agregar_carta(int num2, char color2){
	Carta carta = Carta(num2, color2);
	if (cantidad ==0)
	{
		carta1 = &carta;
	}
	else
	{
		Carta* carta2 = carta1;
		while (carta2->siguiente!=nullptr)
		{
			carta2 = carta2->siguiente;
		}
		carta2->siguiente = &carta;

	}
	cantidad++;
}
void Lista::quitar_carta(int posicion){
	Carta* quitar = carta1;
	if (posicion ==0)
	{
		carta1 = nullptr;
	}
	else
	{
		if (posicion<cantidad)
		{
			int contador = 0;
			while (quitar->siguiente!=nullptr&&contador<posicion-1)
			{
				quitar = quitar->siguiente;
				contador++;
			}
			cantidad = contador;
			quitar->siguiente= nullptr;
			quitar->mostrar = true;
		}
	}
}
Carta Lista::obtener_carta(int posicion1){
	Carta* dato = carta1;
	if (posicion1 == 0)
	{
		return *carta1;
	}
	else
	{
		if (posicion1 < cantidad)
		{
			int contador = 0;
			while (dato->siguiente != nullptr && contador < posicion1 )
			{
				dato = dato->siguiente;
				contador++;
			}
			return *dato;
		}
	}
}