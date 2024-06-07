#include<iostream>
#include<Windows.h>
#include "Person.h"
#include "Apartment.h"
#include "House.h"
using namespace std;

int main()
{
	Person G("George", 30);
	G.output();
	Person L("Ludmila", 27);
	L.output();

	Apartment A(2);
	A.add_person(G, 0);
	A.add_person(L, 1);

	House H(1);
	H.add_apartment(A, 0);

	Apartment* apartments = H.get_apartment();
	Person* residents = apartments[0].get_residents();


}