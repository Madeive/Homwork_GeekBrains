#include <iostream>
#include <string>

using namespace std;

int main() {
	do

	{

		string STR;

		unsigned  x;

		setlocale(LC_ALL, "ru");

		cout << "\n" "������� ����� x"  "\n";

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
			cout << "�����" " " << x << " - �������" "\n" "\n" "��� ���������� ������ ��������� ������� ������� END" "\n" "\n";
		}

		else
		{
			cout << "�����" " " << x <<  " - ������� �� ��������" "\n" "\n" "��� ���������� ������ ��������� ������� ������� END" "\n" "\n";
		}

	} while (true);

}