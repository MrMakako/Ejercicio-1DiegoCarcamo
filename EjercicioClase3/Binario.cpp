#include "Binario.h"



Binario::Binario() {

	for (int i = 0; i < 8; i++) {
		byte[i] = 0;
	}


}

Binario::Binario(const char* _byte)
{


	for (int i=0; i < 8; i++) {
	
		byte[i] = _byte[i]-48;
	}
}

Binario& operator+(const Binario&_b1, const Binario&_b2)
{

	int acarreo = 0;
	Binario resultado;
	// // O: insert return statement here
	for (int i = 0; i < 8; i++) {
		if (acarreo == 0) {
			if (_b1.byte[i] == 0 && _b2.byte[i] == 1) {
			
				resultado.byte[i]=1;
			
			}
			else if (_b1.byte[i] == 1 && _b2.byte[i] == 0) {
				resultado.byte[i] = 1;
			}

			else if (_b1.byte[i] == 1 && _b2.byte[i] == 1) {

				acarreo = 1;
				resultado.byte[i] = 0;
			
			}
			else {
				resultado.byte[i] = 0;
			
			}



		}
		else {
		
			acarreo = 0;
			if (_b1.byte[i] == 0 && _b2.byte[i] == 1) {
				acarreo = 1;
				resultado.byte[i] = 0;

			}
			else if (_b1.byte[i] == 1 && _b2.byte[i] == 0) {
				acarreo = 1;
				resultado.byte[i] = 0;
			}

			else if (_b1.byte[i] == 1 && _b2.byte[i] == 1) {

				acarreo = 1;
				resultado.byte[i] = 1;

			}


			
		
		
		}
	
	}

	return resultado;
	
}

std::ostream& operator<<(std::ostream& out , const Binario& _byte)
{
	out << "{";
	for (int i = 0; i < 8; i++) {
	
		out << _byte.byte[i];

	}
	out << "}\n";
	return out;
}
