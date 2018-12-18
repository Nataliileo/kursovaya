#include "Animal.hpp"
#include <iostream>
#include <fstream>

#define in std::cin
#define out std::cout

Animal::Animal(crstr type, crstr color, crstr name, crstr sex, crstr date_of_birth, crstr owner_name,
			crstr home_name, crstr character, double size):
			type(type), color(color), name(name), sex(sex), home_name(home_name), character(character), size(size){}

Animal::~Animal(){}

void Animal::ConsoleWrite(){
	  out << "Порода: " << type
		  << "\nЦвет: " << color
		  << "\nКличка: " << name
		  << "\nПол: " << sex
		  << "\nДата рождения: " << date_of_birth
		  << "\nВладелец: " << owner_name
		  << "\nПитомник: " << home_name
		  << "\nХарактер: " << character
		  << "\nРазмеры: " << size;
}

void Animal::ConsoleRead(){
	 //защита от некорректного ввода
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите породу: ";
	}while(!(in >> type));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите цвет: ";
	}while(!(in >> color));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите кличку: ";
	}while(!(in >> name));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите пол: ";
	}while(!(in >> sex));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите дату рождения: ";
	}while(!(in >> date_of_birth));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите имя владельца: ";
	}while(!(in >> owner_name));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите название питомника: ";
	}while(!(in >> home_name));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите характер: ";
	}while(!(in >> character));
	do{ 
		//очищаем ввод если некорректно считали
		in.clear();
		in.ignore(10000, '\n');
		out << "Введите размеры: ";
	}while(!(in >> size));
}

bool Animal::file_read(std::string file_name){
		std::ifstream i(file_name);
		//если файла нет, то ошибка
		if(i){
			//если некорректно считали, то ошибка
			if(!(i >> type)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> color)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> name)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> sex)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> date_of_birth)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> owner_name)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> home_name)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> character)){
				return false;	
			}
			//если некорректно считали, то ошибка
			if(!(i >> size)){
				return false;	
			}
			return true;
		}
		return false;
}

void Animal::file_write(std::string file_name){
	std::ofstream o(file_name);
	o << type << ' '
	  << color << ' '
	  << name << ' '
	  << sex << ' '
	  << date_of_birth << ' '
	  << owner_name << ' '
	  << home_name << ' '
	  << character << ' '
	  << size;

}