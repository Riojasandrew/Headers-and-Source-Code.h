#include "MyFuncs.h"
#include <iostream>
#include <string>

using namespace std;

string name;



void intro() {
	
	cout << "Before running the program please enter your name: ";
	cin >> name;


	cout << "Hello " + name + " welcome to the program this is a small demonstration of what the program does" << endl;

}


