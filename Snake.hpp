//����� ����
#pragma once
#include "Animal.hpp"

class Snake: public Animal{
public:
	Snake(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};