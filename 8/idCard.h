#pragma once
#include <string>

class IdCard
{
private:
	int number;
	std::string dateExpire;

public:
	void setNumber(int newNumber);
	int getNumber();
	void setDateExpire(std::string newDateExpire);
	std::string getDateExpire();
	void print();
};