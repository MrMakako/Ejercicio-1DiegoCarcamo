#include "Cuenta.h"

Cuenta::Cuenta(int monto, std::string nombre)

{

	this->nombre = nombre;
	saldo = monto;

	if (saldo < 0) {
		std::cout << "ERROR saldo inicial no valido\n";
		saldo = 0;
	}
}

void Cuenta::abonar(int monto)
{

	saldo += monto;

}

bool Cuenta::cargar(int monto)
{
	if (monto > saldo) {
		return false;
	}
	else {
		saldo = saldo - monto;
		return true;
	}
}

void Cuenta::imprimirSaldo()
{


	std::cout << "Saldo de la cuenta actual es:" << saldo << "\n";

}

void Cuenta::ErrorSaldo()
{


	std::cout << "Error  ha excedido el limite de saldo\n";

}
