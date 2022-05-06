#pragma once

#include <iostream>

#include <string>

#ifndef CUENTA_H

#define CUENTA_H


class Cuenta
{

private:

	int saldo;

	std::string nombre;






public:


	Cuenta(int monto,std::string nombre);

	void  abonar(int monto);


	bool cargar(int monto);


	void imprimirSaldo();

	void ErrorSaldo();


};



#endif // !CUENTA_H

