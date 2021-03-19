#include <iostream>

#define MACRO(Zone,rows,cols) (*(*(Zone+rows)+cols))

int main() {

	int** Zone;

	int x = 3;

	int y = 5;

	Zone = new int* [x]; // задаю массив указателей (колличество "строк")

	for (int i = 0; i < x; i++)
	{
		Zone[i] = new int[y]; // ”казываю колличество "столбцов" массива
	}

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			Zone[i][j] = i * (y)+j;
		}
	}

	std::cout << MACRO(Zone, 1, 2);

}