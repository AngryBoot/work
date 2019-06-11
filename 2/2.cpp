#include <iostream>
#include "dllmain.h"
using namespace std;
void main() {
	complex b[5];
	for (int i = 0; i < 5; i++) {
		read_complex(&(b[i]));
	}
	for (int i = 0; i < 5; i++) {
		cout << "b.x: " << b[i].x << "\t";
	}
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		cout << "b.y: " << b[i].y << "\t";
	}
	cout << "\n";
	system("pause");
}