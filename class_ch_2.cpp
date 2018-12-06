//Kevin Frazier
//kjf833

#include <iostream>
using std::cout;
using std::endl;
#include <time.h>

int main () {
srand (time(NULL));
int rand();


int heads = 0;
int tails = 0;

for ( int i = 1; i <= 1000000 ; i++ ){
int random_number = rand();
if (random_number%2 == 0) {
heads = heads + 1;
}
else {
tails = tails + 1;
}

 
}
cout << "Number of heads = " << heads << endl; 
cout << "Number of tails = " << tails << endl; 

}
