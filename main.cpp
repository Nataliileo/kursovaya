#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Fish.hpp"
#include "Horse.hpp"
#include "Mouse.hpp"
#include "Snake.hpp"

using namespace std;

//�������
template<class T>
void submenu(T *animal){
	 int b;
	 while(true){
		system("cls");
		cout << "1. ������� �� �����"
		     << "\n2. ������� � ����"
		     << "\n3. ������� �� �������"
			 << "\n4. ������� � �������"
	         << "\n5. � ����\n--";
		cin >> b;
		switch(b){
		   case 1:
			   if(!animal->ReadFromFile()){
					cout << "������ ������ �� �����";
			   }
			   break;
		   case 2:
			   animal->WriteToFile();
			   break;
		   case 3:
			   animal->ConsoleRead();
			   break;
		   case 4:
			   animal->ConsoleWrite();
			   break;
		   }
		cout << '\n';
		system("pause");
	 }
}

int main(){
	setlocale(LC_ALL, "");
	Animal *animal = nullptr;
	int a, b;
	//����
	while(true){
		system("cls");
		cout << "1. �����"
			 << "\n2. ������"
			 << "\n3. ����"
			 << "\n4. ������"
			 << "\n5. ����"
			 << "\n6. ����"
			 << "\n7. �����\n--";
		cin >> a;
		delete animal;
		if(a == 7){
			return 0;
		}
		else if(a == 1){
		   animal = new Cat();
		   submenu((Cat*)animal);
		}
		else if(a == 2){
		   animal = new Dog();
		   submenu((Dog*)animal);
		}
		else if(a == 3){
		   animal = new Fish();
		   submenu((Fish*)animal);
		}
		else if(a == 4){
		   animal = new Horse();
		   submenu((Horse*)animal);
		}
		else if(a == 5){
		   animal = new Mouse();
		   submenu((Mouse*)animal);
		}
		else if(a == 6){
		   animal = new Snake();
		   submenu((Snake*)animal);
		}
	}

}