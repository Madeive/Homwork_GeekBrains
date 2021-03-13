#include <iostream>
#include <string>

using namespace std;

int main() {
	do

	{

		string STR;

		unsigned  x;

		setlocale(LC_ALL, "ru");

		cout << "\n" "ввелите число x"  "\n";

		cin >> STR;  
		
		cout << "\n";

		if (STR == "END") {
			break;
		}

		x = stoi(STR);

		bool Prostoe = true;

		for (unsigned y = 2; y < x; y++)

		{
			if (x % y == 0)
			{
				Prostoe = false;
				break;
			}

		}

		if (Prostoe == true)
		{
			cout << "Число" " " << x << " - простое" "\n" "\n" "Для завершения работы программы введите команду END" "\n" "\n";
		}

		else
		{
			cout << "Число" " " << x <<  " - простым не является" "\n" "\n" "Для завершения работы программы введите команду END" "\n" "\n";
		}

	} while (true);

}