#include "COvni.h"

COvni::COvni()
{
	y = 3;
	dy = 1;
}

COvni::~COvni()
{
}

void COvni::borrar()
{
	for (int i = 0; i < dibujo.size(); i++)
	{
		for (int j = 0; j < dibujo.at(i).length(); j++)
		{
			Console::SetCursorPosition(x + j, y + i);
			cout << " ";
		}
	}
}

bool COvni::mover()
{
	if (y + dy < 0 || y + dy + dibujo.size()>24) return 1;
	y += dy;
	return 0;
}

void COvni::dibujar()
{
	for (int i = 0; i < dibujo.size(); i++)
	{
		Console::SetCursorPosition(x, y + i);
		cout << dibujo.at(i);
	}
}

Rectangle COvni::getrec()
{
	return Rectangle(x,y,dibujo.at(larga).length(), dibujo.size());
}

bool COvni::colision(Rectangle rec)
{
	return getrec().IntersectsWith(rec);
}
