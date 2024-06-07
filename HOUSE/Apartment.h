#pragma once
#include "Person.h"

class Apartment
{
	Person* residents;
	int size;
public:
	Apartment();
	Apartment(int);
	Apartment(const Apartment& obj);
	~Apartment();
	Person* get_residents()const;
	void add_person(const Person& p, int i);
	//int get_size(int s);
};

