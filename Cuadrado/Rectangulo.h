#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{

private:

	int Cordenada1[2];

	int Cordenada2[2];

	int Cordenada3[2];

	int Cordenada4[2];

public :


	Rectangulo(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);



	void Establecer(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);


	int longitud();

	int Altura();

	bool Cuadrado();


	bool rectanguloValido();









};



#endif // !RECTANGULO_H
