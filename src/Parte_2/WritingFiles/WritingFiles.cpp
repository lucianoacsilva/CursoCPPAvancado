#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    //ofstream arquivoSaida;
    fstream arquivoSaida;
    string nomeArquivoSaida = "texto.txt";

    arquivoSaida.open(nomeArquivoSaida, ios::out);

    if (arquivoSaida.is_open())
    {
        arquivoSaida << "Ronaldo" << endl;
        arquivoSaida << 123 << endl;
        arquivoSaida << "Tchau de novo" << endl;
        arquivoSaida.close();
    }

    else
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
    
    arquivoSaida.close();

    return 0;
}
