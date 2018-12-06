//class challenge 9.1
//Kevin Frazier
//kjf833

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

class Line {

private:
    double px1,py1, px2, py2;

public:

    Line() {
    px1 = 0; py1 = 0; px2 = 1; py2 = 1; }
    Line( double x1,double y1, double x2, double y2 ) {
    vx = x; vy = y;

 };

 double length() { return sqrt(px1*px2 + py1*py2); };
 Line scale(double factor) { return Line(px1*factor, py1*factor, px2*factor, py2*factor); };

};


int main() {
    Line line1(1.,2., 8., 10.);
    Line line2 = line1.scale(1.5);
    cout << "line2 has length " << line2.length() << endl;
}
