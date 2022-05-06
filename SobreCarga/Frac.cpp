#include "Frac.h"





Frac::Frac() :denominador(1), numerador(1)
{
}

Frac::Frac(int _numerador, int _denomidador):numerador(_numerador),denominador(_denomidador) {


}

void Frac::Simplificar()
{
}

Frac& operator+(const Frac& f1, const Frac& f2)
{
	//Sobre cargar 

	Frac resultado;

	if (f1.denominador == f2.denominador) {
	
	
	
	}


	// // O: insert return statement here

}

std::ostream& operator<<(std::ostream& out, const Frac& fr)
{
	out << fr.numerador << "/" << fr.denominador;

	return out;

	// // O: insert return statement here
}

