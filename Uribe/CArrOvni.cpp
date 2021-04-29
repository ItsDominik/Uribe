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
	arr.push_back(new CAlfa());
	a++;
	if (a % 2 == 0)
	{
		arr.push_back(new CBeta());
		b++;
		if (b % 2 == 0)
			arr.push_back(new CGamma());
	}
}

void CArrOvni::ejecutar(int MAXH)
{
	for (int i = 0; i < arr.size(); i++)
	{
		arr.at(i)->borrar();
		if (arr.at(i)->mover(MAXH) == 0)
			arr.at(i)->dibujar();
		else
		{
			arr.erase(arr.begin() + i);
			i--;
		}
	}
}

int CArrOvni::tamanio()
{
	return arr.size();
}

//bool CArrOvni::colision(Rectangle rec)
//{
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr.at(i)->colision(rec))
//		{
//			arr.erase(arr.begin() + i);
//			i--;
//			return false;
//		}
//	}
//}
