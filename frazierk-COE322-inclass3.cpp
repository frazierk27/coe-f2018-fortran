//Class Challenge 3 
//Kevin Frazier
//kjf833

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float hypotenuse(float side1, float side2);
float compute_angle(float side1, float side2);

int main() {
//user enters values
cout << "Enter side a value " << endl;
float a;
cin >> a;
cout << "Enter side b value " << endl;
float b;
cin >> b;

//compute and output hypotenuse
cout<< "With a side a of " << a << " and a side b of "<< b << endl;
float c = hypotenuse(a, b);
cout<< "The hypotenuse is = "<< c << endl; 

//compute and output angles
float angle_1 = compute_angle(b, c);
float angle_2 = compute_angle(a, c);
cout << "The angle 1 is = " << angle_1 << " degrees" << endl;
cout << "The angle 2 is = " << angle_2 << " degrees" << endl;
}

//functions
float hypotenuse(float side1, float side2){
float c;
c = pow(pow(side1,2) + pow(side2,2),.5);
return c;
}

float compute_angle(float side1, float side2){
float angle;
angle = asin(side1/side2)*180/M_PI;
return angle;
}


