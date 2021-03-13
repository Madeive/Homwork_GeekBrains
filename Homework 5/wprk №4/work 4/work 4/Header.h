#include <iostream>

int* change(int n, int array_size, int hub[])

{
	int* mass = new int[array_size];

	int signa = 1;

	if (n < 0)
	{
		signa = -1;
	}

	if (n > array_size || n < -array_size)
	{
		n = (n - (n / array_size) * array_size);

	}

	int together = 0;

	for (int m = 0; m < array_size; m++)
	{
		together = m + n;

		if (signa > 0) {

			if (together >= array_size) {

				together = together - array_size;
			}
		}
		else
		{
			if (together < 0) {

				together = array_size + together;

			}
		}

		mass[together] = hub[m];


	}
	return mass;
}