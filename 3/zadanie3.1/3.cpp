#include "stdafx.h"
#include "dllmain.h"
#include <stdio.h>
#include <iostream>

using namespace std;

extern "C" __declspec(dllexport) void read_complex(struct complex *a)
{
	cout << "Enter value a.x: ";
	cin >> (*a).x;
	cout << "Enter value a.y: ";
	cin >> (*a).y;
}