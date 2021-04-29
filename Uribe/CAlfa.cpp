#include "CAlfa.h"

CAlfa::CAlfa()
{
    x = 0;
    l = 20;
    a = 5;
}

CAlfa::~CAlfa()
{
}

void CAlfa::dibujar()
{
    Console::SetCursorPosition(x, y); cout << "      _.---._      ";
    Console::SetCursorPosition(x, y+1); cout << "    .'       '.    ";
    Console::SetCursorPosition(x, y+2); cout << "_.-~===========~-._";
    Console::SetCursorPosition(x, y+3); cout << "(_________________)";
    Console::SetCursorPosition(x, y+4); cout << "     \\_______/    ";
}
