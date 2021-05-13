#include <iostream>
#include "Task_1_film.h"

Film::Film(const char* name, const char* producer, const char* genre, int year)
{
	strcpy_s(Name, 30, name);
	strcpy_s(Director, 40, producer);
	strcpy_s(Genre, 20, genre);

	if (year < 0) {
		throw "Year < 0!\n";
	}

	Year = year;
}


void Film::PrintInfo()
{
	std::cout << "Film: " << Name << " Director: " << Director << " Genre: " << Genre << " Year: " << Year << " \n";
}