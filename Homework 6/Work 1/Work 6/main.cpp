#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

using namespace std;

using std::cin;

using std::cout;

void link (string x, string y, string name_of_file)
{



std::fstream out_file_3; out_file_3.open(name_of_file, ios::out);

     if (!out_file_3) {
	    cout << "Faild to open file";
	    return ;
     }

std::fstream out_file;

std::fstream out_file_2;

out_file.open(x, ios::in);

out_file.seekg(0, out_file.end);

int memory = out_file.tellg();

out_file.seekg(0, out_file.beg);

out_file_2.open(y, ios::in);

out_file_2.seekg(0, out_file_2.end);

int memory_2 = out_file_2.tellg();

char* words = new char[memory + memory_2];

out_file_2.seekg(0, out_file_2.beg);

out_file.read(words, memory);

out_file.close();

out_file_2.read(words + memory, memory_2);

out_file_2.close();

out_file_3.write(words, memory + memory_2);

out_file_3.close();

}

int main() {

	std::fstream out_file; out_file.open("Work_6.txt", ios::out);
	if (!out_file) {
		cout << "Faild to open file";
		return 1;
	}

	out_file << "My work one, My work one, My work one, My work one, My work one.";

	std::fstream out_file_2; out_file_2.open("Work_6_2.txt", ios::out);
	if (!out_file_2) {
		cout << "Faild to open file";
		return 1;
	}

	out_file_2 << "My work two, My work two, My work two, My work two, My work two.";

	out_file.close();

	out_file_2.close();

	link("Work_6.txt", "Work_6_2.txt", "work_6_3.txt");
	
	return 0;
}