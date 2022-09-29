#include <iostream>
#include <locale>
#include <windows.h>
#include "utils.h"
#include "tabuada.h"
#include "pessoa.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("title MySoftware && color 7");
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
        else if(*pCMD == "pessoa") //trecho em desenvolvimento
        {
            pessoa();
        }
        else if(*pCMD == "comandos")
        {
            comandos();
        }
        else
        {
            mensagemErro("Comando '"+*pCMD+"' não reconhecido. Use 'comandos' para ver a lista");
        }
    }
}
