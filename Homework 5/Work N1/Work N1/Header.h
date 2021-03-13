
void code(int n, int numbers[])
 {

	for (int i = 0; i < n; i++)
	{

		if (numbers[i] == 0) {

			numbers[i] = 1;

		}
		else {

			if (numbers[i] == 1) {

				numbers[i] = 0;

			}

		}
	};
}

void sending(int x, int numbers[])
{

	for (int y = 0; y < x;  y++)
	{

		std::cout << numbers[y];

	}
	std::cout << "\n";
}
