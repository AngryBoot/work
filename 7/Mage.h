#include <string>
#include "Spell.h"

class Mage
{
private:
	int hp;
	int mp;
	string name;

public:
	void init(int newhp, int newmp, string newname);
	string getname();
	void say(string text);
	int cast(Spell &spl, Mage &target);
	void hit(Spell &spl);
};