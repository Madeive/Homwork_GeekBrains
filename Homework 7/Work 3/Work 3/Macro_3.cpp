#include <iostream>

#define MACRO(SIZE,TYPE) ((sizeof (SIZE)) / (sizeof (TYPE)))

int main() {

	int Zone[9];

	std::cout << MACRO (Zone, int);

}