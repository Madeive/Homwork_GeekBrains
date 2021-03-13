#include <iostream>;
#include <string>

// так как задание здаю позже, выполняю его альтернативным от булевой переменной методом.
// Я попытался сделать программу повторяющейся, с возможностью сделать несколько запросов.

double x;

double y;

int main() {

	do {
		setlocale(LC_ALL, "ru");


		std::cout << "Введите последовательно два числа " "\n";

		std::cin >> x;

		std::cin >> y;


		{
			bool reshenie = true;

			long double PLUS(x + y);

			if (PLUS >= 10 and PLUS <= 20)
			{
				reshenie = true;
				std::cout << "\n" "True" "\n" "\n";

			}
			else
			{
				reshenie = false;
				std::cout << "\n" "False""\n" "\n";

			}

		}
	}
	
	while (true);

}

