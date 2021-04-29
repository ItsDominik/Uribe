#include "CArrOvni.h"

CArrOvni::CArrOvni()
{
	a = 0;
	b = 0;
}

CArrOvni::~CArrOvni()
{
}

void CArrOvni::agregar()
{
	vec.push_back(new CAlfa());
	a++;
	if (a % 2 == 0)
	{
		vec.push_back(new CBeta());
		b++;
		if (b % 2 == 0)
			vec.push_back(new CGamma());
	}
}

void CArrOvni::ejecutar()
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec.at(i)->borrar();
		if (vec.at(i)->mover() == 0)
			vec.at(i)->dibujar();
		else
		{
			vec.erase(vec.begin() + i);
			i--;
		}
	}
}

int CArrOvni::tamanio()
{
	return vec.size();
}

bool CArrOvni::colision(Rectangle rec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i)->colision(rec))
		{
			vec.erase(vec.begin() + i);
			i--;
			return false;
		}
	}
}
