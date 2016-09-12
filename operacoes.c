#include <stdlib.h>
#include <stdio.h>
#include "operacoes.h"

double subtracao(double x, double y){
	double subtracao;

	subtracao = x - y;

	return subtracao;

}

double soma(double x, double y){
	return x+y;
}

double divisao(double x, double y){
    assert(y != 0);
    
    double divisao;
    divisao = x / y;
    
    return divisao;
}

double multiplicacao(double x, double y){

	return x*y;
}
