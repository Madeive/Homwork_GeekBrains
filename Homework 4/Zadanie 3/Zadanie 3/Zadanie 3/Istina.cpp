#include <iostream>


int main()
{
	setlocale(LC_ALL, "ru");

	int const x = 6;

	int const y = 21;

	bool ravenstvo = true;

	if (((x + y) == 10) or (x == 10 && y == 10))
	{
		ravenstvo = true;
	}
	else
	{
		ravenstvo = false;
	}

	if (ravenstvo == true)
		{
			std::cout << "����� �������� x � y ����� 10, ���� ��� ����� 10 ���� �� ���� " "\n" "\n";
		}

		else
		{
			std::cout << "����� �������� x � y �� ����� 10 ���� ��������� �� ����� 10 ���� �� ����" "\n" "\n";
		}


}