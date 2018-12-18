#include "Fish.hpp"

bool Fish::ReadFromFile(){
	 return file_read("fish.txt");
}

void Fish::WriteToFile(){
	 file_write("fish.txt");
}