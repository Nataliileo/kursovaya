//Класс мышь
#pragma once
#include "Animal.hpp"

class Mouse: public Animal{
public:
	Mouse(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};