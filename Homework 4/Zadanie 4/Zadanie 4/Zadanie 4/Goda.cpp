#include <iostream>
#include <cmath>

unsigned int x;

char END[4] = "END";



int main() {

	setlocale(LC_ALL, "ru");
	

		std::cout << "\n" "Введите год" "\n" "\n";


		std::cin >> x;

		if ((x % 4 == 0) and (x % 100 != 0 or x % 400 == 0))
		{
			std::cout << "\n" "Это вискосный год" "\n" "\n";
		}
		else
		{
			std::cout << "Данный год високосным не является" "\n" "\n";
		}
	

	
}
