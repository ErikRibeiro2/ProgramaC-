#include <iostream>
#include <windows.h>

using namespace std;

int calculadora()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    system("title Gerador de Tabuada");

    int valor=0, minimo, maximo=0; //inicialização dos parametros da tabuada

    inicioPrograma:

    cout << "Digite um valor para ver sua tabuada: ";//entrada do valor da tabela
    cin >> valor;

    PontoInicial:

    if (valor < 0) //verificação se o valor não é negativo
    {
        do
        {
            mensagemErro("Valor inválido! Digite um numero maior que 0.");
            cout << "Digite um valor para ver sua tabuada: ";
            cin >> valor;
        }
        while (valor < 0);
        goto pontoParametros;
    }
    else
    {
        pontoParametros:

        //entrada parametros de extensão da tabela
        cout << "Inicio: ";
        cin >> minimo;

        if(minimo < 0)
        {
            do
            {
                mensagemErro("Valor minimo inválido! Digite um numero maior que 0 (zero).");
                cout << "Inicio: ";
                cin >> minimo;
            }
            while (minimo < 0);
            goto ValorMaximo;
        }
        else
        {
            ValorMaximo:
            cout << "Maximo: ";
            cin >> maximo;

            if (maximo < 0)
            {
                do
                {
                    mensagemErro("Valor máximo inválido! Digite um numero maior que zero");
                    cout << "Maximo: ";
                    cin >> maximo;
                }
                while (maximo < 0);
                goto SegundaEtapa;
            }
            else
            {
                SegundaEtapa:

                if (minimo >= maximo)
                {
                    mensagemErro("O valor de inicio não pode ser maior ou igual ao valor maximo!");
                    goto PontoInicial;
                }
                else
                {
                    //criação da tabela
                    cout << "========= TABUADA ==========" << endl;
                    for (minimo; minimo <= maximo; minimo++)
                    {
                        cout << "\t"<< valor << " x " << minimo <<  " = "<< valor * minimo <<endl;
                    }
                    cout << "============================" << endl;
                }
            }
        }
        pontoContinuar:
        char cont;
        cout << "Gostaria de repetir? [s/n]: ";
        cin >> cont;
        if(cont == 's')
        {
            goto inicioPrograma;
        }
        else if (cont == 'n')
        {
            goto fimPrograma;
        }
        else
        {
            mensagemErro("Opção inválida! Digite apenas 's' ou 'n'.");
            goto pontoContinuar;
        }
    }
    cout << " " << endl;
    fimPrograma:
    system("title MySoftware");
    return 0;
}
