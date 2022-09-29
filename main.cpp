#include <iostream>
#include <locale>
#include <windows.h>
#include "utils.h"
#include "calculadora.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("title Meu Programa && color 7");
    cout << "Meu programa - v0.0.1 \nUse o comando 'ajuda' caso tenha dificuldades"<< endl;
    while (true)
    {
        string comando;
        string *pCMD = &comando;

        cout << ">>> ";
        cin >> *pCMD;

        if (*pCMD == "tabuada")
        {
            calculadora();
        }
        else if (*pCMD == "info")
        {
            informacoes();
        }
        else
        {
            mensagemErro("Comando '"+*pCMD+"' não reconhecido");
        }
    }
}
