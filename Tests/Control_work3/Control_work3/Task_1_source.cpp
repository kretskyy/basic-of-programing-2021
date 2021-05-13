#include <iostream>
#include <fstream>
#include "Task_1_film.h"
using namespace std;

void read(const char* fname, int& size, Film*& films)
{
	ifstream input(fname);

	input >> size;

	films = new Film[size];

	char name[30];
	char director[40];
	char genre[20];
	int year;

	for (int i = 0; i < size; ++i) {
		try
		{
			input.get();
			input.get(name, 30, ',');
			input.get();
			input.get(director, 40, ',');
			input.get();
			input.get(genre, 20, ',');
			input.get();
			input >> year;
			films[i] = Film(name, director, genre, year);
		}
		catch (const char* error)
		{
			cout << "Error: " << error << endl;
			i--;
			size--;
		}
		catch (...) {
			cout << "Error occured\n";
		}

	}
	input.close();
}
void input_in_file(const char* fname, int& size, Film*& films)
{
	ofstream output(fname);
	output << size << endl;
	for (int i = 0; i < size; ++i) {
		output << films[i].Name << ' '
			<< films[i].Director << ' '
			<< films[i].Genre
			<< films[i].Year << endl;
	}
	output.close();
}

int main()
{
	Film* films;
	int size;
	char my_genre[100];
	cout << "Enter genre: " << endl;
	cin >> my_genre;


	read("in.txt", size, films);
	input_in_file("Out.txt", size, films);

	for (int i = 0; i < size; ++i) {
		if (films[i].Genre == my_genre)
			films[i].PrintInfo();
	}
}