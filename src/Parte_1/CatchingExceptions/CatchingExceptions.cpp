#include  <iostream>
#include <exception>

using namespace std;

void deuMerda() {
	bool erro1 = false;
	bool erro2 = true;

	if (erro1) {
		throw bad_alloc();
	}

	else if (erro2) {
		throw exception();
	}
}

int main(int argc, char **argv) {
	try {
		deuMerda();
	}

	catch (bad_alloc &e) {
		cout << "A bad_alloc foi: " << e.what() << endl;
	}

	catch (exception &e) {
		cout << "A excecao foi: " << e.what() << endl;
	}

	return 0;

}


