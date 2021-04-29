#pragma once
#include "CAlfa.h"
#include "CBeta.h"
#include "CGamma.h"
class CArrOvni
{
private:
	vector<COvni*>vec;
	int a, b;
public:
	CArrOvni();
	~CArrOvni();
	void agregar();
	void ejecutar();
	int tamanio();
	bool colision(Rectangle rec);
};

