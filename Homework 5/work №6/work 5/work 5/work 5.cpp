#include <iostream>
#include "Header.h"


using namespace std;

using namespace my_work;

	int test_1[12]{ 1,2,3,4,5,6,7,8,9,10,11,12 };

	int numbers[8]{ 1, 0, 1, 0, 1, 0, 1, 1 };

	int for_count[8];

	int x = 2;



	int main()

	{
		sending(((sizeof numbers) / sizeof(int)), (numbers));

		inversion(((sizeof numbers) / sizeof(int)), (numbers));

		sending(((sizeof numbers) / sizeof(int)), (numbers));

		count(for_count);

		sending((8), (for_count));

		cout << boolalpha << left_VS_right(((sizeof test_1) / sizeof(int)), test_1);

		cout << "\n";

		int* test_2 = new int[10];

		for (int i = 0; i < 10; i++)
		{
			test_2[i] = i;
		}

		sending(10, (test_2));

		test_2 = shift(x, (10), test_2);

		sending(10, (test_2));

		return 0;
	}
