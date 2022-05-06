#pragma once
#ifndef FRAC_H
#define FRAC_H
#include< iostream>
class Frac {


	friend Frac& operator+(const Frac&, const Frac&);
	friend  std::ostream& operator<<(std::ostream& ,const Frac&);






protected:

	int numerador, denominador;


public:


	Frac();



	Frac(int, int);


	void Simplificar();









};
#endif // !FRAC_H

