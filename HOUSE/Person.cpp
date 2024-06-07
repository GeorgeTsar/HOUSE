#include<iostream>
#include<Windows.h>
#include "Person.h"
using namespace std;

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* Name, int Age)
{
	this->name = new char[strlen(Name) + 1];
	strcpy_s(this->name, strlen(Name) + 1, Name);
	this->age = Age;
}

Person::Person(const Person& obj)
{
	cout << "Copy constructor\n";
	name = new char[strlen(obj.name) + 1];
	strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
	this->age = obj.age;
}

void Person::output()
{
	cout << "Name: " << name << "\tAge: " << age << endl;
}

Person::~Person()
{
	cout << "Destruct\n";
	delete[] name;
}

const char* Person::get_name() const
{
	return name;
}

int Person::get_age() const
{
	return age;
}
