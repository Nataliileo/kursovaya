#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Fish.hpp"
#include "Horse.hpp"
#include "Mouse.hpp"
#include "Snake.hpp"

using namespace std;

//подменю
template<class T>
void submenu(T *animal){
	 int b;
	 while(true){
		system("cls");
		cout << "1. Считать из файла"
		     << "\n2. Вывести в файл"
		     << "\n3. Считать из консоли"
			 << "\n4. Вывести в консоль"
	         << "\n5. В меню\n--";
		cin >> b;
		switch(b){
		   case 1:
			   if(!animal->ReadFromFile()){
					cout << "Ошибка чтения из файла";
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
	//меню
	while(true){
		system("cls");
		cout << "1. Кошка"
			 << "\n2. Собака"
			 << "\n3. Рыба"
			 << "\n4. Лошадь"
			 << "\n5. Мышь"
			 << "\n6. Змея"
			 << "\n7. Выход\n--";
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