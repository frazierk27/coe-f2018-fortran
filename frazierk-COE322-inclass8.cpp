//Kevin Frazier
//kjf833
//In class challenge 8


#include<iostream>
#include<random>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

int main () {

	
	vector<int> myVector(1);
	int r = 0;
	int i = 0;
	while (r != 42 ){
		r = (int)(100. * rand()/RAND_MAX);
		myVector[i] = r;
		cout << myVector[i] << endl;
		myVector.push_back(1);
		i = i + 1;
	}
	
	cout << "The vector size is " << myVector.size() << endl;

}	
