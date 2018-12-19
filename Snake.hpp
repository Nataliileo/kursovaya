//Класс змея
#pragma once
#include "Animal.hpp"

class Snake: public Animal{
public:
	Snake(){}
	bool ReadFromFile();//чтение из файла
	void WriteToFile();//запись в файл
};