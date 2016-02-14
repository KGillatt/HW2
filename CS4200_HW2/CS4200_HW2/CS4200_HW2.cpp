// Kevin Gillatt
// CS4200
// HW2

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string line;
	ifstream myfile;
	myfile.open("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}

	return 0;
}

