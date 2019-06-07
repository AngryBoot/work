// ConsoleApplication18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "Header.h"


void Time::setTime(long newHours, unsigned char newMinutes )
{
	this->hours=newHours;
	this->minutes=newMinutes;
}
long  Time::getHours()
{
	return this->hours;
}
unsigned char Time::getMinutes()
{
	return this->minutes;
}
Time Time::operator+(Time& plusTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours+plusTime.hours;

	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes>=60) 
	{
		result.minutes=(result.minutes-60);
		result.hours=(result.hours+1);
	}; 
	return result;
}
Time Time::operator-(Time& minusTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours-minusTime.hours;
	int r;
	r=this->minutes-minusTime.minutes;
	if (r<0) 
	{
		result.minutes=r+60;
		result.hours=(result.hours-1);
	}
	else result.minutes=r; 
	return result;
}
Time Time::operator*(int mulTime)
{
	using namespace std;
	Time result;
	result.hours=this->hours*mulTime;
	int t=this->minutes*mulTime;
	if (t>60)
	{
		int AddMinutes=t % 60;
		int AddHours=t / 60;
		result.hours=result.hours+ AddHours;
		result.minutes =  AddMinutes;
	}
	else
		result.minutes=t;
 

	return result;

}
void Time::print()
{
	cout <<this->hours<<"h "<<(int)this->minutes<<"m "<<endl;
}


int _tmain(int argc, _TCHAR* argv[])
{
	Time a,b,c,d;
	Time x,n,m;
	int i;

	a.setTime(2,30);
	b.setTime(2,30);
	c.setTime(0,40);
	d.setTime(3,0);

		x=a+b;
		n=a-c;
		m=a*5;

	x.print();
	n.print();
	m.print();



	system("pause");
	return 0;

}

