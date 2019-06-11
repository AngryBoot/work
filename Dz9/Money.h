#pragma once
class Money
{
private:
	long rubl;
	long kop;

public:
	void setMoney(long newRubl, long newKop);
	long getRubl();
	long getKop();
	Money operator+(Money &PMoney);
	Money operator-(Money &MMoney);
	Money operator*(int mulMoney);
	void print();
};