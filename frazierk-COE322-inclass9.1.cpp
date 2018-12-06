//Kevin Frazier
//kjf833
//In class challenge 9.1

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
};


int main() {
 
	Point p1(1.,2.);
	Point p2(3.,4.);
	
	cout << "The distance of p1 from the origin: " <<  p1.distance_to_origin() << endl;
	
	cout<< "p1 is: ";
	p1.printout();
	
	cout << "The distance between p1 and p2 is: " <<  p1.distance(p2) << endl;

}

