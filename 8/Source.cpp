#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "idCard.h"

using namespace std;

void Department::setName(std::string newName)
{
	name = newName;
}

string Department::getName()
{
	return this->name;
}

void Department::setHead(Employee *newHead)
{
	head = newHead;
}

Employee *Department::getHead()
{
	return this->head;
}

void Employee::setName(std::string newName)
{
	name = newName;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setPosition(std::string newPosition)
{
	position = newPosition;
}

string Employee::getPostion()
{
	return this->position;
}

void Employee::setIdCard(IdCard *newIdCard)
{
	card = newIdCard;
}

IdCard *Employee::getIdCard()
{
	return this->card;
}

void Employee::setRoom(int newRoom)
{
	room = newRoom;
}

int Employee::getRoom()
{
	return this->room;
}

void Employee::setDepartment(Department *newDepartment)
{
	department = newDepartment;
}

Department *Employee::getDepartment()
{
	return this->department;
}

void IdCard::setNumber(int newNumber)
{
	number = newNumber;
}

int IdCard::getNumber()
{
	return this->number;
}

void IdCard::setDateExpire(std::string newDateExpire)
{
	dateExpire = newDateExpire;
}

string IdCard::getDateExpire()
{
	return this->dateExpire;
}

void Employee::print()
{
	cout << "Deprtment " << this->department->getName() << ": " << this->position << " - " << this->name << ", naxodytsa v " << this->room << " kabinete" << " ID nomer " << this->card->getNumber() << "\n";
}

int main()
{
	Department develop, administration;
	Employee headDepartment, headDeveloper, developer, director, dupityDirector, headAccountant;
	IdCard id101, id5016, id5018, id201, id5022, id5019;

	develop.setName("Develop");
	administration.setName("Administration");

	id101.setNumber(101);
	id5016.setNumber(5016);
	id5018.setNumber(5018);
	id201.setNumber(201);
	id5022.setNumber(5022);
	id5019.setNumber(5019);

	headDepartment.setDepartment(&develop);
	headDepartment.setIdCard(&id101);
	headDepartment.setName("Ivanov Ivan Ivanovich");
	headDepartment.setPosition("Head of Department");
	headDepartment.setRoom(101);

	headDeveloper.setDepartment(&develop);
	headDeveloper.setIdCard(&id5016);
	headDeveloper.setName("Petrov Petr Petrovich");
	headDeveloper.setPosition("Head of Developer");
	headDeveloper.setRoom(102);

	developer.setDepartment(&develop);
	developer.setIdCard(&id5018);
	developer.setName("Sidorov Sidor Sidorovich");
	developer.setPosition("Developer");
	developer.setRoom(102);

	director.setDepartment(&administration);
	director.setIdCard(&id201);
	director.setName("Mihailov Mihail Mihailovich");
	director.setPosition("Director");
	director.setRoom(201);

	dupityDirector.setDepartment(&administration);
	dupityDirector.setIdCard(&id5022);
	dupityDirector.setName("Alexandrova Alexandra Alexandrovna");
	dupityDirector.setPosition("Dupity Director");
	dupityDirector.setRoom(201);

	headAccountant.setDepartment(&administration);
	headAccountant.setIdCard(&id5019);
	headAccountant.setName("Evgeneva Evgeniya Evgenevna");
	headAccountant.setPosition("Head of Accountant");
	headAccountant.setRoom(202);

	headDepartment.print();
	headDeveloper.print();
	developer.print();
	director.print();
	dupityDirector.print();
	headAccountant.print();

	system("pause");
}