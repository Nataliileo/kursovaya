//����� ����
#pragma once
#include "Animal.hpp"

class Fish: public Animal{
public:
	Fish(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};