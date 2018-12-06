#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fib(int i){

	if (i < 2 ){
	return 1;
	}
	else{
	int temp;	
	temp = fib(i-1) + fib(i-2);
	cout << temp << endl;

	return temp; 

	}
}

int main(){
	
	int start;
	cout << "How many?" << endl;
	cin >> start;

	int sum = 0;
	sum = fib(start);
	cout << sum << endl;

}
