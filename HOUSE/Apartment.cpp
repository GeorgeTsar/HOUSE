#include<iostream>
#include<Windows.h>
#include "Person.h"
#include "Apartment.h"
using namespace std;

Apartment::Apartment():residents(nullptr), size(0)
{}

Apartment::Apartment(int s):size(s)
{
	cout << "Construct by 1 parameter\n";
	residents = new Person[size];
}

Apartment::Apartment(const Apartment& obj):size(obj.size)
{
	cout << "Copy constructor\n";
	residents = new Person[size];
	for (int i = 0; i < size; i++)
	{
		residents[i] = obj.residents[i];
	}
}

Apartment::~Apartment()
{
	cout << "Destructor\n";
	delete[] residents;
}

Person* Apartment::get_residents()const
{
	return residents;
}

void Apartment::add_person(const Person& p, int i)
{
	if (i >= 0 && i < size)
	{
		residents[i] = p;
	}
}

//int Apartment::get_size(int s)
//{
//	size = s;
//	return size;
//}
