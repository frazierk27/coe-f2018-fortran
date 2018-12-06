//Kevin Frazier
//kjf833
//HW 3

#include<iostream>
#include<math.h>

using std::cout;
using std::endl;
using std::cin;

class triangle {
    private:
	float side1;
	float side2;
	float c; 	
    public:
	triangle(){
	side1 = 1; side2 = 1;
	c = pow(2,.5);
	}
	triangle(float x, float y){
	side1 = x; side2 = y;
	c = pow(pow(side1,2) + pow(side2,2), .5);
	};
	double hypotenuse() { return c;};
	double angle1() { return asin(side1/c)*180/M_PI;};
	double angle2() { return asin(side2/c)*180/M_PI;};

};


int main() {

triangle t1(3.,4.);

	
	//print outputs
	cout <<"Triangle 1 has" << endl;
	cout << "Hypotenuse: " << t1.hypotenuse() << endl;
	cout << "Angle 1: " << t1.angle1() << " degrees" << endl;
	cout << "Angle 2: " << t1.angle2() << " degrees" << endl;
	
}
