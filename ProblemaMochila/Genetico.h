#pragma once

//Struct usada para retorna para função que imprimi os dados necessarios
typedef struct _mochila {

    unsigned short amostra;
    int valorTotal;
    int pesoTotal;
    bool limiteUltrapassado;

} Mochila;


//Struct para controlar os objetos que uma mochila pode ter e o peso Maximo
typedef struct _mochilaPadrao {

    //PESO SUPORTADO NA MOCHILA
    int pesoMaximo = 20;

    //PESO(KG) / VALOR ($)
    int objetos[16][2] = { {1,12},{4,4},{2,3},{5,10},{4,15},{2,20},{1,10},{4,2},{3,1},{2,1},{1,3},{9,15},{4,10},{5,8},{3,4},{12,4} };

    int qtdObjetos = 16;
    

} MochilaPadrao;


unsigned short cruzamentoPontoUnico(unsigned short valor1, unsigned short valor2);

unsigned short cruzamentoAritmetico(unsigned short valor1, unsigned short valor2);

unsigned short mutacaoSimples(unsigned short valor);

unsigned short mutacaoDupla(unsigned short valor);

Mochila avaliacao(unsigned short amostra);
