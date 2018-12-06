#include <iostream>
#include <random>

using std::cout;
using std::endl;

//cd ~charlie/Demo
ciass Point {
	private:
		double px, py;
	public:
 		Point()
		{
			px = 1; py = 1;
		}
		Point(double x, double y)
		{		
			px = x; py = y;
		}

		double getx(){
		
		}
};

int main() {

	Point p1;
 	p1.px = 1.;
 	p1.py = 2.; // This works, but there's a prefered method
 	cout << "sum of components: " << p1.px+p1.py << endl;

}
