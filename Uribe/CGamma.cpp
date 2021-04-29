#include "CGamma.h"

CGamma::CGamma()
{
	x = 60;
	l = 20;
	a = 9;
}

CGamma::~CGamma()
{
}
void CGamma::dibujar()
{
	Console::SetCursorPosition(x, y); cout << "         .          ";
	Console::SetCursorPosition(x, y); cout << "         |          ";
	Console::SetCursorPosition(x, y); cout << "      .-\"^\"-.     ";
	Console::SetCursorPosition(x, y); cout << "     /_....._\\     ";
	Console::SetCursorPosition(x, y); cout << " .-\"`         `\"-.";
	Console::SetCursorPosition(x, y); cout << "(  ooo  ooo  ooo  ) ";
	Console::SetCursorPosition(x, y); cout << " '-.,_________,.-'  ";
	Console::SetCursorPosition(x, y); cout << "     /       \\     ";
	Console::SetCursorPosition(x, y); cout << "   _/         \\_   ";
}

