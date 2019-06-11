#include <iostream>
#include "Mage.h"
void Mage::init(int newhp, int newmp, string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
	return;
}
string Mage::getname()
{
	return this->name;
}
void Mage::say(string text)
{
	cout << this->name << " say: " << text << endl;
	return; 
}
int Mage::cast(Spell &spl, Mage &target)
{
	if (hp > 0 && mp > 0)
	{
		cout << this->name << " hit " << spl.name << " enemy " << target.getname() << endl; 
		target.hit(spl);
	}
	else if (mp < 0)
	{
		say("No mana!");
	}
	else 
	{
		say("I am dead!!");
	}
	return 0;
}
void Mage::hit(Spell &spl)
{
	this->hp = this->hp-spl.dhp;
	this->mp = this->mp-spl.dmp;
	if (this->hp <= 0) 
	{
		say("I am loser ");
	}
	if (this->mp <= 0)
	{
		say("I'm out of mana ");
	}
}
void main()
{
	Mage Player1;
	Mage Player2;
	Spell bolt;
	Spell drain;
	bolt.name = "bolt";
	bolt.dhp = 25;
	bolt.dmp = 5;
	drain.name = "drain";
	drain.dhp = 5;
	drain.dmp = 5;
	Player1.init(70, 70, "Player1");
	Player1.say("Hi!");
	Player2.init(70, 70, "Player2");
	Player2.say("Hello!");
	Player1.cast(bolt, Player2);
	Player2.cast(drain, Player1);
	Player1.cast(bolt, Player2);
	Player2.cast(drain, Player1);
	Player1.cast(bolt, Player2);
	Player2.cast(drain, Player1);
	system("pause");
}