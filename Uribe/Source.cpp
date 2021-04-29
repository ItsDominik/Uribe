#include "CInvasion.h"
void main()
{
	const int MAXH = 30;
	CInvasion* obj = new CInvasion();
	obj->juego(MAXH);
	delete obj;
	_getch();
}