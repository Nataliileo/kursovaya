#include "Snake.hpp"

bool Snake::ReadFromFile(){
	 return file_read("Ssnake.txt");
}

void Snake::WriteToFile(){
	 file_write("snake.txt");
}