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
	  out << "������: " << type
		  << "\n����: " << color
		  << "\n������: " << name
		  << "\n���: " << sex
		  << "\n���� ��������: " << date_of_birth
		  << "\n��������: " << owner_name
		  << "\n��������: " << home_name
		  << "\n��������: " << character
		  << "\n�������: " << size;
}

void Animal::ConsoleRead(){
	 //������ �� ������������� �����
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ������: ";
	}while(!(in >> type));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ����: ";
	}while(!(in >> color));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ������: ";
	}while(!(in >> name));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ���: ";
	}while(!(in >> sex));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ���� ��������: ";
	}while(!(in >> date_of_birth));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ��� ���������: ";
	}while(!(in >> owner_name));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� �������� ���������: ";
	}while(!(in >> home_name));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� ��������: ";
	}while(!(in >> character));
	do{ 
		//������� ���� ���� ����������� �������
		in.clear();
		in.ignore(10000, '\n');
		out << "������� �������: ";
	}while(!(in >> size));
}

bool Animal::file_read(std::string file_name){
		std::ifstream i(file_name);
		//���� ����� ���, �� ������
		if(i){
			//���� ����������� �������, �� ������
			if(!(i >> type)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> color)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> name)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> sex)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> date_of_birth)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> owner_name)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> home_name)){
				return false;	
			}
			//���� ����������� �������, �� ������
			if(!(i >> character)){
				return false;	
			}
			//���� ����������� �������, �� ������
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