#ifndef OPERACOES_H
#define OPERACOES_H
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

double soma(double x, double y);

double subtracao(double x, double y);

double divisao(double x, double y){
    assert(y != 0);
    
    double divisao;
    divisao = x / y;
    
    return divisao;
}

double multiplicacao(double x, double y);


#endif
