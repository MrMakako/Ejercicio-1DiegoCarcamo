#pragma once
#ifndef RACIONAL_H



#define RACIONAL_H

#endif // !RACIONAL_H


class Racional
{


private:
	int denominador;
	int numerador;


public:

	Racional();//prototipo de constructor

	Racional(int, int);

	void ImprimirRacional();
	//Operaciones artimeticas

	Racional sumaRacional( Racional r2);
	Racional Restar(Racional _r2);
	Racional Dividir(Racional _r2);
	Racional Multiplicar(Racional _r2);
	Racional Factorizar(Racional _r);
	Racional Elevar(int pow);


	~Racional();


	


};

