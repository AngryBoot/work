#include <iostream>
#include "Chocolate.h"

using namespace std;

void main()
{
	Chocolate Mars, Snickers, Twix, x , y;

	Mars.name = "Mars ";
	Mars.weight = 58;
	x.with_nuts = false;

	Snickers.name = "Snickers ";
	Snickers.weight = 58;
	y.with_nuts = true;

	Twix.name = "Twix ";
	Twix.weight = 58;
	x.with_nuts = false;

	if (y.with_nuts == true)
	{
		cout << Snickers.name << Snickers.weight << "g " << "with nuts" << "\n";
	}
	if (x.with_nuts == false)
	{
		cout << Mars.name << Mars.weight << "g " << "without nuts" << "\n";
		cout << Twix.name << Twix.weight << "g " << "without nuts" << "\n";
	}

	system("pause");
}