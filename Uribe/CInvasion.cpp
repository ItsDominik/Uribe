#include "CInvasion.h"

CInvasion::CInvasion()
{
	vec = new CArrOvni();
}

CInvasion::~CInvasion()
{
}

void CInvasion::juego(int MAXH)
{
	while (vec->tamanio()<20)
	{
		vec->ejecutar(MAXH);
		if (kbhit() && toupper(getch()) == 'A')
		{
			vec->agregar();
		}
		//if(vec->colision(juga->getrec()))
		_sleep(50);
	}
	Console::SetCursorPosition(40, 12);
	cout << "Hemos sido invadidos...";
}
