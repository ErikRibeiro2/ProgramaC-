#include <iostream>
#include <locale>
#include <windows.h>
#include <vector>
#include <stdexcept>

using namespace std;

void color(int idCor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), idCor);
}
/*
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}*/

void pessoa()
{
    setlocale(LC_ALL, "Portuguese");
    try
    {
        string nome="nulo", sexo="nulo", idade="nulo";
        cout << "Nome, sexo e idade: ";
        color(6);
        cin >> nome >> sexo >> idade;
        color(7);
        cout << "Nome: " << nome  << "\nSexo: " << sexo << "\nIdade: " << idade << endl;
        cout << "Parte inacabada!\n\n";
    }
    catch(exception& erro)
    {
        cout << "ERRO: " << erro.what() << endl;
    }

}


