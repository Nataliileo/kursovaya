#include "Horse.hpp"

bool Horse::ReadFromFile(){
	 return file_read("horse.txt");
}

void Horse::WriteToFile(){
	 file_write("horse.txt");
}