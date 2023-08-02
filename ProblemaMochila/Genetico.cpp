#include "Genetico.h"
#include "Binario.h";



unsigned short cruzamentoPontoUnico(unsigned short valor1, unsigned short valor2)
{   
    return orBinario(bitAlto(valor1),bitBaixo(valor2));
}

unsigned short cruzamentoAritmetico(unsigned short valor1, unsigned short valor2)
{
    return andBinario(valor1,valor2);
}

unsigned short mutacaoSimples(unsigned short valor)
{
    return inverterBit(valor, 9);
}

unsigned short mutacaoDupla(unsigned short valor)
{
    return inverterBit(inverterBit(valor, 3), 12);
}

Mochila avaliacao(unsigned short amostra)
{
    MochilaPadrao mochilaPadrao;
    Mochila mochila;
    mochila.pesoTotal = 0;
    mochila.valorTotal = 0;

    mochila.amostra = amostra;
    
    for (int i = 0; i < mochilaPadrao.qtdObjetos; i++) {

        if (testarBit(amostra, i)) {

            mochila.pesoTotal += mochilaPadrao.objetos[i][0];
            mochila.valorTotal += mochilaPadrao.objetos[i][1];

        }

    }

    mochila.limiteUltrapassado = mochila.pesoTotal > mochilaPadrao.pesoMaximo ? true : false;

    return mochila;
}

