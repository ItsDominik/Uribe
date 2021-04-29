#pragma once
#include "CArrOvni.h"
#include<conio.h>
class CInvasion
{
private:
	CArrOvni* vec;
public:
	CInvasion();
	~CInvasion();
	void juego(int MAXH);
};

