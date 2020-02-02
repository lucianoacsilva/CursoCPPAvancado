#include <iostream>
#include <exception>

using namespace std;

class MinhaExcecao: public exception {
public:
	virtual const char* what() const throw() {
		return "Deu errado alguma coisa!";
	}


private:
};

class Teste {
public:
	void deuMal() {
		throw MinhaExcecao();
	}

private:
};

int main(int argc, char **argv) {

	Teste teste;

	try {
		teste.deuMal();
	}

	catch (MinhaExcecao &e) {
		cout << "Erro: " << e.what() << endl;
	}
	return 0;
}
