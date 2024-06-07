#pragma once

class Person
{
	char* name;
	int age;
public:
	Person();
	Person(const char*, int);
	Person(const Person& obj);
	void output();
	~Person();
	const char* get_name()const;
	int get_age()const;
};

