#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	// int a = srand(time(0));

	int a = rand();
	cout << "a: " << a << endl;

	srand(4);
	int b = rand();
	cout << "b: " << b << endl;

	srand(time(0));
	int c = rand();
	cout << "c: " << c << endl;

	return 0;
}

