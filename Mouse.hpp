//����� ����
#pragma once
#include "Animal.hpp"

class Mouse: public Animal{
public:
	Mouse(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};