#include <iostream>
#include <windows.h>

using namespace std;

#define VERMELHO 4
#define BRANCO 7


void cor(int numCor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), numCor);
}

void linhaInfo(string atribudo, string valor)
{
    cout << "\t" << atributo;
    cor(3);
    cout << valor << "\n";
    cor(7);
}

void mensagemErro(string mensagem)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), VERMELHO);
    cout << " :: [ERRO] "<< mensagem << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BRANCO);
}

void informacoes()
{
    cout << ":: Informações: " << endl;
    cout << "\t     Software: "; cor(3); cout << "StarLight\n"; cor(7);
    cout << "\tDesenvolvedor: "; cor(3); cout << "Erik Ribeiro Café\n"; cor(7);
    cout << "\t       Versão: "; cor(3); cout << "0.0.1\n"; cor(7);
    cout << "\tAtualizado em: "; cor(3); cout << "24 de setembro de 2022\n"; cor(7);
    linhaInfo("Software:", "StarLight");
}

