//Класс лошадь
#pragma once
#include "Animal.hpp"

class Horse: public Animal{
public:
	Horse(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};