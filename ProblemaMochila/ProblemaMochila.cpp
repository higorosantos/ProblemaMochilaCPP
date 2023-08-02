// ProblemaMochila.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <windows.h>
#include "Genetico.h"


void imprimirAvaliacao(unsigned short amostra);
void criarAmostras(unsigned short entradas[]);

using namespace std;

int main()
{
  
    const int max = 6;
   
    unsigned short entradas[max] = { 60504 , 25000 ,12329 ,38054 ,1259,732, };


    cout << "Entre com 6 soluçoes iniciais (numeros entre 0 e 65535): " << endl;

    /*for (int i = 0; i < 6; i++) {

        int num = 0;

        cout << "Digite o " << (i + 1) << " valor: ";
        cin >> num;

        while (num < 0 || num > 65535) {

            cout << "";
            cout << "Digite o " << (i + 1) << " valor: ";
            cin >> num;

        }

        entrada[i] = num;


    }*/

    system("cls");
    cout << "Resultado da Avalicação\n";
    cout << "-------------------------------\n";
    
    for (int i = 0; i < max; i++) {
        
        imprimirAvaliacao(entradas[i]);
    
    }

    cout << "--------------------------------\n";

    criarAmostras(entradas);

    return 0;
}


void criarAmostras(unsigned short entradas[]) {

    imprimirAvaliacao(cruzamentoPontoUnico(entradas[0], entradas[1]));
    imprimirAvaliacao(cruzamentoAritmetico(entradas[2], entradas[3]));
    imprimirAvaliacao(mutacaoSimples(entradas[4]));
    imprimirAvaliacao(mutacaoDupla(entradas[5]));


}


void imprimirAvaliacao(unsigned short amostra)
{   


    Mochila result = avaliacao(amostra);
    
    cout.width(10); cout << result.amostra;
    cout << " - ";
    cout << "$" << result.valorTotal;
    cout << " - ";
    cout.width(3); cout << result.pesoTotal << "Kg";
    cout << " - ";
    cout << (result.limiteUltrapassado ? "X" : "OK") << endl;


}
