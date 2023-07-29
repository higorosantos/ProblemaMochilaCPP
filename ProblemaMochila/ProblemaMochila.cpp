// ProblemaMochila.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <clocale>
#include <windows.h>
#include "Binario.h"

using namespace std;

int main()
{

    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
  
    const int max = 6;
   
    unsigned short entrada[max] = {};


    cout << "Entre com 6 soluçoes iniciais (numeros entre 0 e 65535): " << endl;

    /*for (int i = 0; i < 6; i++) {

        int num = 0;

        cout << "Digite o " << (i + 1) << " valor: ";
        cin >> num;

        while (num < 0 || num > 65535) {

            cout << "Digite o " << (i + 1) << " valor: ";
            cin >> num;

        }

        entrada[i] = num;


    }
    */

    unsigned short result = testarBit(6200,15);

    cout << result;

    return 0;
}
