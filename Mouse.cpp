#include "Mouse.hpp"

bool Mouse::ReadFromFile(){
	 return file_read("mouse.txt");
}

void Mouse::WriteToFile(){
	 file_write("mouse.txt");
}