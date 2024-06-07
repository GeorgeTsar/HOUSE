#include<iostream>
#include<Windows.h>
#include "Apartment.h"
#include "House.h"
using namespace std;

House::House():apartments(nullptr), size(0)
{}

House::House(int s) : size(s)
{
	cout << "Construct by 1 parameter\n";
	apartments = new Apartment[size];
}


House::House(const House& obj):size(obj.size)
{
	cout << "Copy constructor\n";
	apartments = new Apartment[size];
	for (int i = 0; i < size; i++)
	{
		apartments[i] = obj.apartments[i];
	}
}

House::~House()
{
	cout << "Destructor\n";
	delete[] apartments;
}

Apartment* House::get_apartment()const
{
	return apartments;
}

void House::add_apartment(const Apartment& a, int i)
{
	if (i >= 0 && i < size)
	{
		apartments[i] = a;
	}
}

//int House::get_size(int s)
//{
//	size = s;
//	return size;
//}
