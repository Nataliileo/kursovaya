//����� ������
#pragma once
#include "Animal.hpp"

class Horse: public Animal{
public:
	Horse(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};