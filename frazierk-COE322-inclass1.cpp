//Challenge 1
//Kevin Frazier
//kjf833

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main() {
cout << "Enter side a value " << endl;
float a;
cin >> a;
cout << "Enter side b value " << endl;
float b;
cin >> b;

cout<< "With a side a of " << a << " and a side b of "<< b << endl;
float c = pow(pow(a,2) + pow(b,2),.5);
cout<< "The hypotenuse is = "<< c << endl; 

double PI;
PI = 3.14159265;

float angle_A;
angle_A = asin(a/c)*180/PI ;
float angle_B;
angle_B = asin(b/c)*180/PI;

cout << "The angle 1 is = " << angle_A << " degrees" << endl;
cout << "The angle 2 is = " << angle_B << " degrees" << endl;


}
