//Kevin Frazier
//kjf833
//In Class challenge 5

#include <iostream>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;

//Recursive function
int recurse_sum(int i){
	int a;
	if (i == 0)
		return 0;
	else
		a = pow(i,2) + recurse_sum(i - 1);
		cout << "The "<< i << " sum of squares is " << a << endl;
		return a;

}


int main () {

	recurse_sum(100);

}
