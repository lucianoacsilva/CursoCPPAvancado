#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{

    fstream arquivoEntrada;
    string nomeArquivoEntrada = "texto.txt";

    arquivoEntrada.open(nomeArquivoEntrada, ios::in);

    if (arquivoEntrada.is_open())
    {
        string linha;
        while (arquivoEntrada)
        {
            getline(arquivoEntrada, linha);
            cout << linha << endl;

            // string palavra;

            // arquivoEntrada >> palavra;

            // if (palavra == "\n")
            // {
            //     cout << endl;
            // }
            
            // cout << palavra << " ";
            
        }
        
    }

    else
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
    }
    
    

    return 0;
}
