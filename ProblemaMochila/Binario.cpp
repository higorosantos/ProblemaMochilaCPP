#include "Binario.h"
#include <iostream>

unsigned short ligarBit(unsigned short valor, int posicao)
{	
	unsigned short mascara = 1 << posicao;
	
	return orBinario(valor,mascara);
}

unsigned short desligarBit(unsigned short valor, int posicao)
{	
	unsigned short mascara = ~(1 << posicao);

	return andBinario(valor, mascara);
}

unsigned short inverterBit(unsigned short valor, int posicao) {

	unsigned short mascara = (1 << posicao);

	return xorBinario(valor, mascara);

}

bool testarBit(unsigned short valor, int posicao)
{	
	unsigned short mascara = (1 << posicao);

	return andBinario(valor,mascara);
}

unsigned short xorBinario(unsigned short valor1, unsigned short valor2) {

	return (unsigned short)valor1 ^ valor2;

}

unsigned short andBinario(unsigned short valor, unsigned short valor2)
{
	return (unsigned short)valor & valor2;
}

unsigned short orBinario(unsigned short valor, unsigned short valor2)
{
	return (unsigned short)valor | valor2;
}

unsigned short bitBaixo(unsigned short valor)
{
	return andBinario(valor,255);
}

unsigned short bitAlto(unsigned short valor)
{
	return andBinario(valor, 65280);
}
