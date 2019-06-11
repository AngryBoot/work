#include "stdafx.h"
#include <string>
#include <iostream>
#include "book.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
void book::set_name(const char * new_name)
{
	this->name=new_name;
	return;
}
void book::set_year(const int new_year)
{
	this->year=new_year;
	return;
}
void book::get_info()
{
	cout<<this->name<<"("<<this->year<<")";
	return;
}