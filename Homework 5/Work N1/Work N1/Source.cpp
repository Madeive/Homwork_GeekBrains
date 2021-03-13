#include <iostream>
#include "Header.h"
using namespace std;

int numbers[8] { 1, 0, 1, 0, 1, 0, 1, 1 };


int main() {

	sending((sizeof(numbers) / sizeof(int)), numbers);

	code((sizeof(numbers) / sizeof(int)), numbers );

	sending((sizeof(numbers) / sizeof(int)), numbers);

	retern : 0;
	
}