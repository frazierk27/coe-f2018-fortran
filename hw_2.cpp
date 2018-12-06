//Kevin Frazier
//K-Shift Decoder/Encoder
//Function: to encrpyt/decrypt text using a k-shift cypher
//10/17/2018

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;

string encoder(string text, int length, int key);

int main () {

	//Encode or decode (user input)
	string decision = "";
	cout << "Encode or decode? (e/d)" << endl;
	cin >> decision;
	
	//Input Key
	int key;
	cout << "What is the secret key? (K-shift value)" << endl;
	cin >> key;
	
	//Task determination
	string task = "";	
	if (decision == "e" || decision == "E"){
		task = "encode";
	}
	else if (decision == "d" || decision == "D"){
		task = "decode";
		key = -key;
	}
	else{
		cout << "Non-valid input." << endl;
		return 0;
	}
	
	//user input string to encode or decode
	string text = "";
	cout << "What do you wish to " << task << "?" << endl;
	cin >> text;

	int length = text.length();	
	
	//print output depending on encode or decode
	string encoded = encoder(text, length, key); 
	cout << "The " << task << "d text is:" << endl << encoded << endl;

}

//encode and decode function
string encoder(string text, int length, int key){
	string result = "";
	for (int i = 0 ; i < length ; i++ ){ 
	result = result + char((int(text[i])+key-97)%26 +97);
	}
	return result;
}
