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
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < a; j++)
		{
			Console::SetCursorPosition(x + j, y + i);
			cout << " ";
		}
	}
}

bool COvni::mover(int MAXH)
{
	if (y + dy + a> MAXH) return true;
	y += dy;
	return false;
}

void COvni::dibujar()
{
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
