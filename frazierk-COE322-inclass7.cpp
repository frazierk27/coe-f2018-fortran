//Kevin Frazier
//kjf833
//In class challenge 7

#include<iostream>
#include<math.h>

using std::cout;
using std::endl;
using std::cin;

float triangle_compute(float &side1, float &side2, float &c, float &angle1, float &angle2, float &right_angle){
	c = pow(pow(side1,2) + pow(side2,2), .5);
	angle1 = asin(side1/c)*180/M_PI;
	angle2 = asin(side2/c)*180/M_PI;
	right_angle = 90;

}

struct triangle {
	float side1;
	float side2;
	float c;
	float angle1;
	float angle2;
	float right_angle; 	
};
int main() {

triangle a, b;
	
	//input side lengths of triangles
	cout << "Side 1 for triangle 1?" << endl;
	cin >> a.side1;
	cout << "Side 2 for triangle 1?" << endl;
	cin >> a.side2;
	cout << a.c << endl;
	
	cout << "Side 1 for triangle 2?" << endl;
	cin >> b.side1;
	cout << "Side 2 for triangle 2?" << endl;
	cin >> b.side2;
	
	//run functions to compute values
	triangle_compute(a.side1, a.side2, a.c, a.angle1, a.angle2, a.right_angle);
	triangle_compute(b.side1, b.side2, b.c, b.angle1, b.angle2, b.right_angle);
	
	//print outputs
	cout <<"Triangle 1 has" << endl << "Hypotenuse: " << a.c << endl <<"Angle 1: " << a.angle1 << " degrees" << endl;
	cout  << "Angle 2: " << a.angle2 << " degrees" << endl << "Right angle: " << a.right_angle << " degrees" << endl;
	
	cout << endl << "Triangle 2 has" << endl << "Hypotenuse: " << b.c << endl <<"Angle 1: " << b.angle1 << " degrees" << endl;
	cout  << "Angle 2: " << b.angle2 << " degrees" << endl << "Right angle: " << b.right_angle << " degrees" << endl;

}
