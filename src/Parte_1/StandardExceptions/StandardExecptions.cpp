//============================================================================
// Name        : CursoCPPAvancado.cpp
// Author      : Lucigol
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[999999999999999999];
		delete [] pMemory;
	}

private:
};

int main() {

	try {
		CanGoWrong wrong;
	}

	catch (bad_alloc &e) {
		cout << "Exceção lançada: " << e.what() << endl;
	}


	cout << "Fala, meu!!" << endl;

	return 0;
}
