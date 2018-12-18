//Класс собака
#pragma once
#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};