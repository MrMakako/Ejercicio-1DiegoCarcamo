#include "Racional.h"
#include "iostream"
#include <cmath>
//implemenacion del constructor

Racional::Racional() :numerador(1),denominador(1) {



}


Racional::Racional(int _numerador, int _denominador) {
	Racional::numerador = _numerador;
	Racional::denominador = _denominador;

}

Racional Racional::sumaRacional( Racional r2)
{

	if (this->denominador == r2.denominador) {
		return Racional(this->numerador+numerador,this->denominador+r2.denominador);

	
	
	}
	else {
		return Racional(this->numerador * r2.denominador + r2.numerador * this->denominador, this->denominador * r2.denominador);
	
	
	}
	
}

Racional Racional::Restar(Racional _r2)
{

	if (this->denominador == _r2.denominador) {
		return Racional(this->numerador - numerador, this->denominador -_r2.denominador);



	}
	else {
		return Racional(this->numerador * _r2.denominador - _r2.numerador * this->denominador, this->denominador * _r2.denominador);


	}
	
}

Racional Racional::Dividir(Racional _r2)
{
	return Racional(this->denominador * _r2.numerador,this->numerador * _r2.denominador);

}

Racional Racional::Multiplicar(Racional _r2)
{
	return Racional(this->numerador*_r2.numerador,this->denominador*_r2.denominador);
}

Racional Racional::Elevar(int pow)
{
	return Racional(std::pow(this->numerador,pow),std::pow(this->denominador,pow));

}





Racional::~Racional() {
	std::cout << "destruyenclo clase racional";

}

void Racional::ImprimirRacional() {

	if (denominador == 0 && numerador == 0) {
	
		std::cout << "indefinido\n";
	}
	else if(denominador == 0) {
		std::cout << "indefinido\n";
	}
	else {
	
		std::cout << (float(numerador) / float(denominador)) << "\n";
	
	}


}