#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "egg.h"


using namespace std;

class human {
private: 
    string name;
    int age;
public: 
	void init(string newname, int newage);
	string getname();
	int getage();	
	void say(string text);
	void try_break_egg(egg * some_egg);
};
