#pragma once
class Fractions
{
private:
	long int unit;
	unsigned short int fraction;

public:
	void setFractions(long int newUnit, unsigned short int newFraction);
	long int getUnit();
	unsigned short int getFraction();
	Fractions operator+(Fractions &plusFractions);
	Fractions operator-(Fractions &minusFractions);
	Fractions operator*(int mulFractions);
	bool operator>(Fractions &smallerFractions);
	bool operator<(Fractions &biggerFractions);
	void print();
};