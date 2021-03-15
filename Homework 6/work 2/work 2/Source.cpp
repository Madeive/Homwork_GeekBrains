#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

int main() {

	std::fstream worker;

	worker.open("Work_6_3.txt");

	if (!worker.is_open()) {

		cout << "Faild to open file";

		return 3;
	}

	if (worker.eof()) {

		return 2;
	}

	string word;

	string line;

	cin >> word;


	do
	{

		getline(worker, line);


		if (line.find(word, 0) !=  string::npos)
		{
			cout << word << " is find";

		}
		else
		{
			cout << word << " is not find";
		}



	} while (!worker.eof());

	worker.close();

	return 0;
}