#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "egg.h"

using namespace std;
class animal {
public: 
     
void setname(string name);
     
string getname();
     
void say(string text);

void try_break_egg(egg * some_egg);
     
egg * create_egg();
private: 
    string name;
};