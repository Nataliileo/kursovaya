//����� �����
#pragma once
#include "Animal.hpp"

class Cat: public Animal{
public:
	Cat(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};