/**
 * Example of getline()
 */
#include <iostream>

using namespace std;

int main()
{
    // int number;
    string input;
    cout << "Hello world!" << endl;
    cout << "Enter a number: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;
    cout << "Data size (using length()): " << input.length() << endl;
    cout << "Data size (using size()): " << input.size();
    return 0;
}
