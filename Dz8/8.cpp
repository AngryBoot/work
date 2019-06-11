#include <iostream>
#include <stdio.h>
#include "Money.h"
#include <string>
void Money::set(int newRubl, int newKop)
{
	this->rubl=newRubl;
	this->kop=newKop;
}
long Money:: getRubl()
{
	return this ->rubl;
}
unsigned char Money:: getKop()
{
	return this->kop;
}
void Money:: addMoney(Money& someMoney )
{
	using namespace std;
	Money result;
	result.rubl=this->rubl+someMoney.rubl;
	result.kop=this->rubl+someMoney.kop;
	if (result.kop>=100) 
	{
		result.kop=(result.kop-100);
		result.rubl=(result.rubl+1);
	}; 
}
void Money:: withdrawMoney(Money& someMoney)
{
	using namespace std;
	Money result;
	result.rubley=this->rubl-someMoney.rubl;
	int r;
	r=this->kop-someMoney.kop;
	if (r<0) 
	{
		result.kop=r+100;
		result.rubl=(result.rubl-1);
	}
	else result.kop=r; 
}
void Money:: print()
{
	cout <<this->getRubl()<< "," <<(int)this->getKop() << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Money a,b;
	a.set(2,5);
	b.set(2,0);
	cout << "Summa: " << a.getRubl()+b.getRubl()<< "."<< a.getKop()+b.getKop()<< endl;
	cout << "Raznost: " << a.getRubl()-b.getRubl()<< "."<< a.getKop()-b.getKop()<< endl;
	a.print();
	b.print();
	system("PAUSE");
	return 0;
}