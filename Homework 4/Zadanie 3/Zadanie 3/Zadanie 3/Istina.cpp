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
			std::cout << "Сумма констант x и y равна 10, либо они равны 10 сами по себе " "\n" "\n";
		}

		else
		{
			std::cout << "Сумма констант x и y не равна 10 либо константы не равны 10 сами по себе" "\n" "\n";
		}


}