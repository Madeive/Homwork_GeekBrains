#include <iostream>;
#include <string>

// ��� ��� ������� ���� �����, �������� ��� �������������� �� ������� ���������� �������.
// � ��������� ������� ��������� �������������, � ������������ ������� ��������� ��������.

double x;

double y;

int main() {

	do {
		setlocale(LC_ALL, "ru");


		std::cout << "������� ��������������� ��� ����� " "\n";

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

