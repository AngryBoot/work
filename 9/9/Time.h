#pragma once
#include <string>

class Time
{
private:
	int hours;
	int minutes;

public:
	void setTime(int newHours, int newMinutes);
	long getHours();
	long getMinutes();
	Time operator+(Time &plusTime);
	Time operator-(Time &minusTime);
	Time operator*(int mulTimes);
	void print();
};