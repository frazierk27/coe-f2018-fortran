//Kevin Frazier
//kjf833
//In Class challenge 6

#include <iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

//Recursive function
int recurse_sum(int i){
	int a;
	if (i == 0){
		return 0;
}
	if (i == 1){
		return 1;
}
	else{
		return recurse_sum(i-1) + recurse_sum(i-2);
}
}

int main () {
//first part of program
	int f_number;
	cout << "What Fibonacci number would you like to calculate?" << endl;
	cin >> f_number;

	int fibonacci;
	fibonacci = recurse_sum(f_number);
	cout << "The " << f_number << " Fibonacci number is " << fibonacci  << endl;

//second part of program
	int f_sequence;
	cout << "How many numbers in Fibonacci sequence to print?" << endl;
	cin >> f_sequence;

	for (int i = 0; i < f_sequence; i++){
		cout << recurse_sum(i) << endl;
}
}
