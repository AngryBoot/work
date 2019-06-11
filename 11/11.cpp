#include "stdafx.h"
#include "stdafx.h"
#include "egg.h"
#include "animal.h"
#include "humnew.h"

int _tmain(int argc, _TCHAR* argv[])
{
	human a,b;
		a.init("ded",70);
		b.init("baba",60);
		animal mouse,chicken;
		mouse.setname("mouse");
		chicken.setname("chicken");
		egg * pointer_to_egg;
		pointer_to_egg=chicken.create_egg();
		a.try_break_egg(pointer_to_egg);
		b.try_break_egg(pointer_to_egg);
		chicken.try_break_egg(pointer_to_egg);
		mouse.try_break_egg(pointer_to_egg);
		system("pause");
	return 0;
}

