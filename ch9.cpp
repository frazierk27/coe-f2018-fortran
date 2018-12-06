//Class challenge 9
//Kevin Frazier
//kjf833

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using std::vector;
using std::cout;
using std::endl;
using std::max_element;
using namespace std;

vector<float> random_vector(int length){
	vector<float> x(length);
	//for (auto i: x){
	for( int i = 0 ; i< length ; i++){
		float random_value = 100. * rand()/RAND_MAX;
		x[i] = random_value;
		//i = random_value;
	}
	return x;

}


int sort(vector<float> &x){
	int k = 0;
	int j = 0;
	int length = x.size();
	vector<float> sorted_vector(length);
	
	//loop over entire sorted vector, k is index of sorted vector 	
	while (k<length){
	float min = 100.; //100 is maximum possible number
	//determine min value and associated index
	for (int i = 0; i < length ; i++){
		if ( x[i] <  min){
			min = x[i];
			j = i;
		}
	}
	
	//assign min value to sorted vector
	sorted_vector[k] = x[j];
	//set old value equal to 100
	x[j] = 100.;
	k = k + 1; //sorted_vector index
	}
	x = sorted_vector;
	return 0;
		
}

float printVector(vector<float> Vector1){
	for (auto i: Vector1){
		cout << i << endl;
	}
}

int main () {

	int length = 10;
	vector<float> values = random_vector(length);
	cout << "The random vector is: " << endl;
	printVector(values);
        
	sort(values);
	cout << "The sorted vector is (from lowest to highest): "<< endl;
	printVector(values);	
	


}
