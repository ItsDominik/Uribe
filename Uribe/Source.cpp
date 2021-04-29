#include "CInvasion.h"
void main()
{
	CInvasion* obj = new CInvasion();
	obj->juego();
	delete obj;
	_getch();
}