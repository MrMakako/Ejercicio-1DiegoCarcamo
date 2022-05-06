#include "Rectangulo.h"
#include<iostream>
void Rectangulo::Establecer(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	if (x1 > 20 || y1 > 20 || x2 > 20 || y2 > 20 || x3 > 20 || y3 > 20 || x4 > 20 || y4 > 20) {
		std::cout << "Medidda mayor a 20\n";
	
	}
	else {
		Cordenada1[0] = x1;
		Cordenada1[1] = y1;

		Cordenada2[0] = x2;
		Cordenada2[1] = y2;
		Cordenada3[1] = y3;
		Cordenada3[0] = x3;
		Cordenada4[0] = x4;
		Cordenada4[1] = y4;


		if (rectanguloValido()) {
		
		
			
			std::cout << "Rectangulo Valido\n" ;
			std::cout << "Longitud:"<< longitud() << "\n";
			std::cout << "Altura:" <<Altura()<<"\n";
		
		
		}
		else {
		
			std::cout << "Error Medidas incorrectas\n";

		}
	
	}



}

int Rectangulo::longitud()
{
	int longitud;


	longitud = Cordenada2[0];



	return longitud;
}

int Rectangulo::Altura()
{
	return Cordenada1[1];
}

bool Rectangulo::Cuadrado()
{
	if (Cordenada2[0] == Cordenada4[0] && Cordenada1[1] == Cordenada4[0]) {
	
		return true;
	}
	return false;
}

bool Rectangulo::rectanguloValido()
{


	if (longitud() < Cordenada4[0] || longitud() > Cordenada4[0]) {
		return false;
	}
	return true;
}

Rectangulo::Rectangulo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{

	Establecer(x1, y1, x2, y2, x3, y3, x4, y4);

}
