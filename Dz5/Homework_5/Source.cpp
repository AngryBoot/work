#include <iostream>
#include "Fractions.h"

using namespace std;

void Fractions::setFractions(long int newUnit, unsigned short int newFraction)
{
	unit = newUnit;
	fraction = newFraction;
}

long int Fractions::getUnit()
{
	return this->unit;
}

unsigned short int Fractions::getFraction()
{
	return this->fraction;
}

Fractions Fractions::operator+(Fractions &plusFractions)
{
	Fractions result;
	result.unit = this->unit + plusFractions.unit;
	result.fraction = this->fraction + plusFractions.fraction;
	return result;
}

Fractions Fractions::operator-(Fractions &minusFractions)
{
	Fractions result;
	result.unit = this->unit - minusFractions.unit;
	result.fraction = this->fraction - minusFractions.fraction;
	return result;
}

Fractions Fractions::operator*(int mulFractions)
{
	Fractions result;
	result.unit = this->unit * mulFractions;
	result.fraction = this->fraction * mulFractions;
	return result;
}

bool Fractions::operator>(Fractions &smallerFractions)
{
	if (this->unit > smallerFractions.unit)
		return true;
	else
		if (this->unit < smallerFractions.unit)
			return false;
		else
			if (this->fraction > smallerFractions.fraction)
				return true;
			else
				if (this->fraction < smallerFractions.fraction)
					return false;
}

bool Fractions::operator<(Fractions &biggerFractions)
{
	if (this->unit < biggerFractions.unit)
		return true;
	else
		if (this->unit > biggerFractions.unit)
			return false;
		else
			if (this->fraction < biggerFractions.fraction)
				return true;
			else
				if (this->fraction > biggerFractions.fraction)
					return false;
}

void Fractions::print()
{
	cout << this->unit << "," << this->fraction << "\n";
}

void main()
{
	Fractions a, b, plus, minus, mul;

	a.setFractions(12, 45);
	b.setFractions(8, 56);

	plus = a + b;
	minus = a - b;
	mul = a * 4;

	if (a > b)
	{
		cout << "a > b - true" << "\n";
	}
	else
	{
		cout << "a > b - false" << "\n";
	}

	if (a < b)
	{
		cout << "a < b - true" << "\n";
	}
	else
	{
		cout << "a < b - false" << "\n";
	}

	plus.print();
	minus.print();
	mul.print();

	system("pause");
}