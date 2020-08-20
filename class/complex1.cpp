#include <iostream>
#include <math.h>
//#include <ncurses.h>
using namespace std;

class complex {
	float real, image;
	public:
	complex(float r=0, float i=0) {
		cout<<"Object is created: "<<this<<endl;
		real = r;
		image = i;
	}

	void display() {
		cout<<real<<(image>=0?'+':'-')<<"j*"<<fabs(image)<<endl;
	}

	/* complex operator+ */
	complex operator+(complex b) {
		complex c;
		
		c.real = real + b.real;
		c.image = image + b.image;

		return c;
	}

};


int main() {
	
	//initscr();
	
	complex a(-2,5);
	complex b(3,4);
	
	cout<<"Display two complex numbers:\n";
	a.display();
	b.display();
	cout<<endl;

	cout<<"Sum of two complex numbers:"<<endl;
	complex c;
	c = a + b;
	c.display();
	cout<<endl;
	
//	getch();
//	endwin();

	return 0;
}
