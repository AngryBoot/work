#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

#ifndef _DLLTEST_H_

#define _DLLTEST_H_ 

using namespace std;
class egg{
public: 
    int size;
    int weight;
__declspec(dllexport) bool bricking(string who);
__declspec(dllexport) void say(string text);

};
#endif
