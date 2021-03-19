#include <iostream>
#include <string>

using namespace std;

#define BALANSE(number_1,number_2) (((number_1) >= 0) and ((number_1) < (number_2)))

int main() {

	cout << BALANSE (-1, 100);

	return 0;

}