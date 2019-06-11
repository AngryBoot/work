class Employee;
#pragma once
#include <string>
#include "Department.h"
#include "idCard.h"

class Employee
{
private:
	std::string name;
	std::string position;
	IdCard *card;
	int room;
	Department *department;

public:
	void setName(std::string newName);
	std::string getName();
	void setPosition(std::string newPosition);
	std::string getPostion();
	void setIdCard(IdCard *newIdCard);
	IdCard *getIdCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(Department *newDepartment);
	Department *getDepartment();
	void print();
};