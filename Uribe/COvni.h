#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace System;
using namespace System::Drawing;
using namespace std;
class COvni
{
protected:
	vector<string>dibujo;
	int x, y, dy, larga;

public:
	COvni();
	~COvni();
	void borrar();
	bool mover();
	void dibujar();
	Rectangle getrec();
	bool colision(Rectangle rec);
};

