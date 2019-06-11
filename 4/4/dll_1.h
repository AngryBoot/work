#ifndef _DLLTEST_H_
#define _DLLTEST_H_ 

#include <iostream>
#include <stdio.h>
#include <windows.h> 

extern "C" __declspec(dllexport) int read_number();

#endif