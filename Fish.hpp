//Класс рыба
#pragma once
#include "Animal.hpp"

class Fish: public Animal{
public:
	Fish(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};