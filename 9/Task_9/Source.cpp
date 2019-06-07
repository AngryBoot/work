#include <iostream>
#include "Time.h"
#include <stdio.h>
#include <string>

using namespace std;

void Time::setTime(int newHours, int newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}

long Time::getHours()
{
	return this->hours;
}

long Time::getMinutes()
{
	return this->minutes;
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
	result.minutes = this->minutes - minusTime.minutes;
	if (minutes < minusTime.minutes)
	{
		result.hours--;
		result.minutes = 60 - result.minutes*(-1);
	}
	return result;
}

Time Time::operator*(int mulTimes)
{
	Time result;
	result.hours = this->hours * mulTimes;
	result.minutes = this->minutes * mulTimes;
	while (result.minutes >= 60)
	{
		result.hours++;
		result.minutes -= 60;
	}
	return result;
}

void Time::print()
{
	cout << this->hours << "h " << (int)this->minutes << "m " << endl;
}

void main()
{
	Time a, b, pl, mi, mu;
	a.setTime(2, 30);
	b.setTime(1, 20);
	pl = a+a;
	mi = a-b;
	mu = a*5;
	pl.print();
	mi.print();
	mu.print();
	system("pause");
}