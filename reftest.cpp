#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool the_function(int &i)
{
cout << "i in function before set i= " << i << endl;
i = 5;
cout << "i in function after set i= " << i << endl;
return true;
}

int main () {

int var =0;
cout << "var before function call= " << var << endl;
bool worked = the_function(var);
cout << "Did it work? " << std::boolalpha << worked << endl;
cout << "var after function call= " << var << endl;


}
