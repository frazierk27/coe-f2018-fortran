#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <time.h>

int main () {
srand (time(NULL));
int rand();
int random_number = rand();
cout << "The random number is " << random_number << endl;
if (random_number%2 == 0) {
cout << "The number is heads" << endl;
}
else {
cout << "The number is tails" << endl;

}

}
