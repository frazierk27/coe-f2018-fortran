//Kevin Frazier
//kjf833
//In class challenge 9.2

#include<iostream>
#include<cmath>
using std::cout;
using std::endl;


class Point {

private: 
	double px,py;
public: 
	Point(){
	px = 1; py = 1;
	}
	Point(float xcoordinate, float ycoordinate){
	px = xcoordinate; py = ycoordinate;
	};

 	double xcoordinate() { return px; }; // accessor
 	double ycoordinate() { return py; };
	float distance_to_origin() { return pow(pow(px,2) + pow(py,2),.5); };
	void printout() { cout << px << ", " << py << endl;};
	double distance(Point point2) { return pow(pow(px-point2.xcoordinate(),2) + pow(py-point2.ycoordinate(),2),.5);};
	void setx(double new_x) { px = new_x; };
	void sety(double new_y) { py = new_y; };
};

class Line {
private:
	Point p1, p2;
public:
	Line(Point p_1, Point p_2){
		p1 = p_1; p2 = p_2;
	};
	void printout() { p1.printout(); p2.printout(); };
	Point midpoint() { return Point((p2.xcoordinate() - p1.xcoordinate())/2 + p1.xcoordinate(), (p2.ycoordinate() - p1.ycoordinate())/2 + p1.ycoordinate());};
};
int main() {
 
	Point p1(1.,2.);
	Point p2(3.,4.);
	
	cout << "The distance of p1 from the origin: " <<  p1.distance_to_origin() << endl;
	
	cout<< "p1 is: ";
	p1.printout();	
	
	cout << "p2 is: ";
	p2.printout();

	cout << "The distance between p1 and p2 is: " <<  p1.distance(p2) << endl;
	
	Line L1(p1,p2);
	cout << "The points on the line are: "; 
	L1.printout();

	Point midpoint = L1.midpoint();
	cout << "The midpoint is: ";
	midpoint.printout();

}

