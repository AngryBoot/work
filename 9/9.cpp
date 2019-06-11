#include <iostream>
#include "header.h"
#include <stdio.h>
#include <string>
using namespace std;
void Time::setTime(int newHours, int newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}
long Time::getMinutes()
{
	return this->minutes;
}
long Time::getHours()
{
	return this->hours;
}
Time Time::operator+(Time &plusTime)
{
	using namespace std;
	Time result;
	result.hours = this->hours + plusTime.hours;

	result.minutes = this->minutes + plusTime.minutes;
	if (result.minutes >= 60)
	{
		result.minutes = (result.minutes - 60);
		result.hours = (result.hours + 1);
	};
	return result;
}
Time Time::operator-(Time &minusTime)
{
	Time result;
	result.hours = this->hours - minusTime.hours;
	int z;
	z = this->minutes - minusTime.minutes;
	if (z < 0)
	{
		result.minutes = z + 60;
		result.hours = (result.hours - 1);
	}
	else result.minutes = z;
	return result;
}
Time Time::operator*(int mulTimes)
{
	Time result;
	result.hours = this->hours*mulTimes;
	result.minutes = this->minutes*mulTimes;
	while (result.minutes >= 60)
	{
		result.hours++;
		result.minutes -= 60;
	}
	return result;
}
void Time::print()
{
	cout << this->hours << "hours " << (int)this->minutes << "minutes " << endl;
}
int main()
{
	Time a, b, plus, minus, mul;
	a.setTime(2, 30);
	b.setTime(1, 20);
	plus = a + a;
	minus = a - b;
	mul = a * 5;
	plus.print();
	minus.print();
	mul.print();
	system("pause");
	return 0;
}