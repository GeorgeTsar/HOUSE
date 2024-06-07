#pragma once
#include "Apartment.h"

class House
{
	Apartment* apartments;
	int size;
public:
	House();
	House(int);
	House(const House& obj);
	~House();
	Apartment* get_apartment()const;
	void add_apartment(const Apartment& a, int i);
	//int get_size(int s);

};


