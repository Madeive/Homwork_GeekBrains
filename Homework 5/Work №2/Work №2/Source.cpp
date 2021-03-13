#include <iostream>

using namespace std;

int numbers[8];


	void count(int numbers[])
	{
		int i = 0;

		for (int x = 1; x <= 22; x += 3, i++)

		{
			
			numbers[i] = x;

			cout << numbers[i];

			cout << "\n";

		}
	}

	int main() {

		count(numbers);


		return 0;
}