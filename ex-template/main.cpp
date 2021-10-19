#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
  return a + b;
}

template <class T>
T maxof2(T a, T b) {
  return (a > b ? a : b);
}

int main() {
  double x, y;
  cout << "Enter 2 double numbers here, separate by space: ";
  cin >> x >> y;
  int a, b;
  cout << "Enter 2 integers here, separate by space: ";
  cin >> a >> b;
  cout << "Sum: " << sum(x, y) << endl;
  cout << "Max: " << maxof2(a, b) << endl;
}
