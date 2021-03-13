#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	int x = 1;

	cin >> x;

	int N;

	int* hub = new int[x];

	for (int y = 0; y < x; y++)
	{

		int i;

		cin >> i;

		hub[y] = i;

	}

	    cin >> N;

		hub = change(N, x, hub);

		for (int k = 0; k < x; k++)
		{
			cout << hub[k] << "\n";

		}

	


		



}