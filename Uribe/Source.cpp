#include "CInvasion.h"
void main()
{
	const int MAXH = 20;
	Console::SetWindowSize(200, 40);
	CInvasion* obj = new CInvasion();
	obj->juego(MAXH);
	delete obj;
	_getch();
}