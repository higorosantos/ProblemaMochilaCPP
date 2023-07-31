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
