#include "Lista.h"
#include <iostream>

Lista::Lista():_primer(nullptr), _ultimo(nullptr)
{

}
void Lista::Agregar(Nodo* nodo)
{
	if (_primer == nullptr) //Si la lista está vacía
	{
		_primer = nodo;
		_ultimo = nodo;
	}
	else //Si la lista no está vacía
	{
		_ultimo->SetSiguiente(nodo);
		_ultimo = nodo;
	}
}

Nodo* Lista::GetPrimer()
{
	return _primer;
}

Lista::~Lista()
{
	Nodo* i = _primer;
	while (i != nullptr)
	{
		Nodo* tmp = i;
		i = i->GetSiguiente();
		delete tmp;
	}
	std::cout << "La lista se ha eliminado con éxito" << std::endl;
}

