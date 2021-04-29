#include "CGamma.h"

CGamma::CGamma() :COvni()
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
	Console::SetCursorPosition(x, y+1); cout << "         |          ";
	Console::SetCursorPosition(x, y+2); cout << "      .-\"^\"-.     ";
	Console::SetCursorPosition(x, y+3); cout << "     /_....._\\     ";
	Console::SetCursorPosition(x, y+4); cout << " .-\"`         `\"-.";
	Console::SetCursorPosition(x, y+5); cout << "(  ooo  ooo  ooo  ) ";
	Console::SetCursorPosition(x, y+6); cout << " '-.,_________,.-'  ";
	Console::SetCursorPosition(x, y+7); cout << "     /       \\     ";
	Console::SetCursorPosition(x, y+8); cout << "   _/         \\_   ";
}

