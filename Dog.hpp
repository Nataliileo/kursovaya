//����� ������
#pragma once
#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog(){}
	bool ReadFromFile();//������ �� �����
	void WriteToFile();//������ � ����
};