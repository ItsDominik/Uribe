#include "CInvasion.h"
void main()
{
	const int MAXH = 50;
	Console::SetWindowSize(140, MAXH);
	CInvasion* obj = new CInvasion();
	obj->juego(MAXH);
	delete obj;
	_getch();
}