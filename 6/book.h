#pragma once
#include <string>

class book
{
public:
	book(void);
	virtual ~book(void);
private:
	std::string name;
	int year;

	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};