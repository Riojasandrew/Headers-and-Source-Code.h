#include "Middle.h"
#include <iostream>

using namespace std;


void middle() {
	cout << "this is the vanilla middle!!" << endl;
}

int middle(int i) {
	switch (i) {
	case 1: {
		cout << "This is the 1 middle!!" << endl;
		break;
	}
	case 2: {
		cout << "This is the 2 middle!!" << endl;
		break;
	}
	case 3: {
		cout << "Headers and source codes allow you to input your code in a header than transfer them allowing you not to put so much\n code in your main! I'll put up a code that I have ready to test." << endl;
		break;
	}
	default:
		cout << "this is the default middle!!" << endl;
		break;
	}
	return 0;
}
