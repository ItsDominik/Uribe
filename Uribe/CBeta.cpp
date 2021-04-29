#include "CBeta.h"

CBeta::CBeta()
{
	x = 30;
	l = 11;
	a = 3;
}

CBeta::~CBeta()
{
}

void CBeta::dibujar()
{
	Console::SetCursorPosition(x, y); cout << "   .---.   ";
	Console::SetCursorPosition(x, y); cout << " _/__~0_\\_";
	Console::SetCursorPosition(x, y); cout << "(_________)";
}
