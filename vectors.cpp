#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

vector<float> makeVector( int size, float value){
	vector<float> x(size,value);
	return x;

}

int printVector(vector<float> Vector1){
	for (auto i: Vector1){
		cout << i << endl;
	}
}

int resetVectorToZero(vector<float> &myVector2){
	for (auto &i : Vector2 ){
	i = 0;
	}
}

vector<float> combineVector(vector<float> A, vector<float> B){
	
	return C;
}

vector<float> combineVectorsAndEmpty(vector<float>vectorB){
	for (auto i: vectorB){
	vectorC.push_back(vectorB.back());
	vectorB.pop_back();
	}
	return vectorC;
}


int main () {
	vector<int>  myVector = {4, 7,3, 2, 1};
	
	vector<float> R(20,5);
	vector<vector<float>> N(10,R);

	cout << "N contains:" << endl;
	for (auto &x : N){
		cout << x << " ";
	}	

	for (auto &i: myVector){
	cout << i << endl;
	i = 5;
	}
	
	for (auto i: myVector){
	cout << i << endl;
	}
	
	vector<float> A = makeVector(5,3);
	vector<float> B = makeVector(7,2);
	vector<float> C = combineVector(A,B);
	printVector(C);


}
