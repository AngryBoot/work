#pragma once
class Money
{
private:
	long rubley;
	unsigned char kopeek;

public:
	void set(int newRubl, int newKop);
	long getRubl();
	unsigned char getKop();
	void addMoney(Money& someMoney );
	void withdrawMoney(Money& someMoney);
	void print();
};