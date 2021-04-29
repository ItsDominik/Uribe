#include "COvni.h"

COvni::COvni()
{
	y = 0;
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

bool COvni::mover(int MAXW, int MAXH)
{
	if (y + dy < 0) return true;
	y += dy;
	return false;
}

void COvni::dibujar()
{
	for (int i = 0; i < dibujo.size(); i++)
	{
		Console::SetCursorPosition(x, y + i);
		cout << dibujo.at(i);
	}
}

//Rectangle COvni::getrec()
//{
//	return Rectangle(x,y,l, dibujo.size());
//}
//
//bool COvni::colision(Rectangle rec)
//{
//	return getrec().IntersectsWith(rec);
//}
