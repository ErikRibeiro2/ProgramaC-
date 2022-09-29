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
    cout << "\t     Software: "; cor(3); cout << "MySoftware\n"; cor(7);
    cout << "\tDesenvolvedor: "; cor(3); cout << "Erik Ribeiro Café\n"; cor(7);
    cout << "\t       Versão: "; cor(3); cout << "0.0.1\n"; cor(7);
    cout << "\tAtualizado em: "; cor(3); cout << "2 de setembro de 2022\n"; cor(7);
    linhaInfo("Software:", "StarLight");
}

void comandos()
{
    string comandos[3] = {"tabuada", "info", "pessoa"};
    cout << ":: Comandos disponiveis: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "-\t " << comandos[i] << endl;
    }
}
