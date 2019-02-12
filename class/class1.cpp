// classes example
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
//    void set_values (int,int);
	Rectangle (int,int);
    int area() {return width*height;}
};

/**
void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}
**/

// Constructor
Rectangle::Rectangle (int a, int b) {
	width = a;
	height = b;
}

int main () {
/**
  Rectangle rect, rectb;
  rect.set_values (3,4);
  rectb.set_values (5,6);
**/
   Rectangle rect(3, 4);
   Rectangle rectb(5, 6);

  cout << "area: " << rect.area() << endl;
  cout << "area: " << rectb.area() << endl;

  return 0;
}
