#include "Npc.h"
#include <iostream>

using namespace std;

void end(int i) {

	string password = "hunter";
	string ps;
	int v = 0;
	int j = 1 + i;
	
	cout << "\n\n\n\n######coco////##!@#*hunter^&######////silver#####////chilly#####////spy#####\n######bravo//!@#*^&helltaker#*(%^souleater###&*()%%$grasshopper#?#?$snake*&(^" << endl;
	
	if (i) {
		while (password != ps, v < 3) {
			cout << "Number of attempts #" << j << endl;
			"Enter password: ";
			cin >> ps;
			i++;
			j++;
			if (password != ps) {
				cout << "Incorrect password..\n";
				cout << endl;
			}
			else {
				ps = "hunter"; v = 3;
			}
			if (password == ps) {
				cout << "Nice one.. How many tries did you do?";
			}
			else {
				cout << "Better luck next time!";
			}
		}
		
	}
	
}

void end() {
	cout << "This is the end of my story!!! Nothing exiting" << endl;
}