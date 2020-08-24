#include <iostream>

using namespace std;

int main() {
    cout << "===By default:" << endl;
    cout << "(5 > 2) return: " << (5 > 2) << endl; // By defaul, (5 > 2) return '1'
    cout << "(5 < 2) return: " << (5 < 2) << endl;
    
    cout << endl;
    
    cout << "===Let's enable 'boolalpha': cout<< boolalpha;\n";
    cout << boolalpha << endl; // Enable 'boolalpha': (5 > 2) return 'true'
    cout << "(5 > 2) return: " << (5 > 2) << endl;
    cout << "(5 < 2) return: " << (5 < 2) << endl;

    return 0;
}