//Class Challenge 4 
//Kevin Frazier
//kjf833

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;



float compute_stuff(float &side1, float &side2, float &c, float &angle1, float &angle2);

struct triangles {
	float x;
	float y;
	float c;
	float theta1;
	float theta2;
};


int main() {
//Triangle 1
	triangles t1, t1;

	t1.x = 3;
	t1.y = 4;

//triangle 2

	t2.x = 5;
	t2.y = 12;

//initialize variables
float c;
float angle_1;
float angle_2;

//run function
bool worked = compute_stuff(a, b, c, angle_1, angle_2);

//output hypotenuse
cout<< "With a side a of " << a << " and a side b of "<< b << endl;
cout<< "The hypotenuse is = "<< c << endl; 

//output angles
cout << "The angle 1 is = " << angle_1 << " degrees" << endl;
cout << "The angle 2 is = " << angle_2 << " degrees" << endl;
}

//function
float compute_stuff(float &side1, float &side2, float &c, float &angle1, float &angle2){

c = pow(pow(side1,2) + pow(side2,2),.5);
angle1 = asin(side1/c)*180/M_PI;
angle2 = asin(side2/c)*180/M_PI;
}


