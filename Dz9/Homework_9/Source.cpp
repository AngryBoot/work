#include <iostream>
#include "Money.h"
#include <string>
using namespace std;

void Money::setMoney(long newRubl, long newKop)
{
	rubl = newRubl;
	kop = newKop;
}
long Money::getRubl()
{
	return this->rubl;
}
long Money::getKop()
{
	return this->kop;
}
Money Money::operator+(Money &pMoney)
{
	Money result;
	result.rubl = this->rubl + pMoney.rubl;
	result.kop = this->kop + pMoney.kop;
	if (result.kop >= 100)
	{
		result.rubl++;
		result.kop -= 100;
	}
	return result;
}
Money Money::operator*(int mulMoney)
{
	Money result;
	result.rubl = this->rubl * mulMoney;
	result.kop = this->kop * mulMoney;
	while (result.kop >= 100)
	{
		result.rubl++;
		result.kop -= 100;
	}
	return result;
}
Money Money::operator-(Money &mMoney)
{
	Money result;
	result.rubl = this->rubl - mMoney.rubl;
	result.kop = this->kop - mMoney.kop;
	if (mMoney.kop > kop)
	{
		result.rubl--;
		result.kop = 100 - result.kop*(-1);
	}
	return result;
}
void Money::print()
{
	cout << this->rubl << "," << this->kop << "\n";
}
void main()
{
	Money a, b, plus, minus, mul;
	a.setMoney(30, 34);
	b.setMoney(20, 45);
	plus = a + b;
	minus = a - b;
	mul = a * 3;
	plus.print();
	minus.print();
	mul.print();
	system("pause");
}