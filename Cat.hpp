//Класс кошка
#pragma once
#include "Animal.hpp"

class Cat: public Animal{
public:
	Cat(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};