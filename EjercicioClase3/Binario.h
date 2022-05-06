#pragma once

#ifndef BINARIO_H
#define BINARIO_H
#include <iostream>

class Binario
{


	friend Binario& operator+(const Binario&_b1, const Binario&_b2);
	friend std::ostream& operator<<(std::ostream&, const Binario&);


protected:



	int byte[8];


public:
	Binario();

	Binario(const char* _byte);


	






};


#endif // !BINARIO_H;

