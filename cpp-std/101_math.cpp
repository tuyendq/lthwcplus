/**
 * math.h in C++
*/
#include <iostream>
#include <math.h>
#include <cassert>

using namespace std;

int main()
{
    cout << "Exploring math.c library in C++\n\n";
    double a;
    a = pow(3, 4);
    cout << "> 3 power to 4 [pow(3,4)] is: " << pow(3, 4) << "\n\n";
    assert(pow(3,4) == 81);
}