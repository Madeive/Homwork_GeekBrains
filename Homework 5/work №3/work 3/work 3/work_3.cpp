#include <iostream>
#include "Header.h"
using namespace std;


int main() {

	int x = 1;


	cin >> x;

	int* jumpforce = new int[x];

	for (int y = 0; y < x; y++)
	{

		int i;

		cin >> i;

		jumpforce[y] = i;


	}

	cout << boolalpha << count(x, jumpforce); 

	return 0;

}