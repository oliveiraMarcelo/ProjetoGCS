#include <stdlib.h>
#include <stdio.h>
#include "operacoes.h"

int main(){

	printf("------------ MENU DE OPERACOES -------------\n\n");

	printf("1- Soma\n");
	printf("2- Subtracao\n");
	printf("3- Multiplicacao\n");
	printf("4- Divisao\n");
	printf("0- Sair\n");

	int opcao;
	int number1;
	int number2;

	do{

		printf("\nDigite a opcao: \n");
		scanf("%d", &opcao);

		if(opcao !=0){
		printf("Digite o numero: \n");
		scanf("%d", &number1);

		printf("Digite o numero: \n");
		scanf("%d", &number2);
		}

		switch (opcao){
			case 1:
				printf("Resultado = %.2f\n", soma(number1,number2));
			break;

			case 2:
				printf("Resultado = %.2f\n", subtracao(number1,number2));
			break;

			case 3:
				printf("Resultado = %.2f\n", multiplicacao(number1,number2));
			break;

			case 4:
				printf("Resultado = %.2f\n", divisao(number1,number2));
			break;

			case 0:
				exit(1);
			break;

			default: 
				printf("Opcao invalida!\n");
		}

	}while(opcao!=0);

}