//баовый класс Животные
#pragma once
#include <string>
#define crstr const std::string&

class Animal{
protected:
	std::string type;//порода
	std::string color;//окрас
	std::string name;//кличка
	std::string sex;//пол
	std::string date_of_birth;//дата рождения
	std::string owner_name;//имя владельца
	std::string home_name;//наименование питомника
	std::string character;//характер
	double size; //размер
	bool file_read(std::string file_name);//чтение из файла
	void file_write(std::string file_name);//запись в файл
public:
	Animal(crstr type = "", crstr color = "", crstr name = "", crstr sex = "",
			crstr date_of_birth = "", crstr owner_name = "",
			crstr home_name = "", crstr character = "", double size = 0.0);
	void ConsoleWrite();//запись в консоль
	void ConsoleRead();//чтение из консоли
	virtual ~Animal();
};