#include "Dog.hpp"

bool Dog::ReadFromFile(){
	 return file_read("dog.txt");
}

void Dog::WriteToFile(){
	 file_write("dog.txt");
}