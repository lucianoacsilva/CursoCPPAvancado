#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nomeArquivo = "population.txt";
    fstream ArquivoEntrada;

    //Abrindo o ponteiro de arquivo

    ArquivoEntrada.open(nomeArquivo, ios::in);    

    while (ArquivoEntrada)
    {
        string linha;
        int populacao;

        getline(ArquivoEntrada, linha, ':');
        ArquivoEntrada >> populacao;

        //ArquivoEntrada.get();

        ArquivoEntrada >> ws;

        cout << linha << " -> " << populacao << endl;

    }

    ArquivoEntrada.close();
    
    return 0;
}
