#include "Cat.hpp"

bool Cat::ReadFromFile(){
	 return file_read("cat.txt");
}

void Cat::WriteToFile(){
	 file_write("cat.txt");
}