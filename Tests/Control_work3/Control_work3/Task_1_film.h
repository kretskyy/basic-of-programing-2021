#pragma once
struct Film
{
	char Name[30];
	char Director[40];
	int Year;
	char Genre[20];
	Film(const char* name = "", const char* producer = "", const char* genre = "", int year = 0);

	void PrintInfo();
};