#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	srand(time(0));
	setlocale(LC_ALL, "Portuguese");
	int resultado, dado, continuar;
	do{
		system("cls");
		printf("Deseja rolar dados? \n");
		printf("1- sim\n");
		printf("2- não\n");
		scanf("%d", &continuar);
		if (continuar == 2){
			break;
		}
		else{
			printf("Digite o número de lados do dado que voce deseja rolar: ");
			scanf("%d", &dado);
			resultado = rand() % dado + 1;
			printf("O lado sorteado foi %d.\n", resultado);
			system("pause");
		}
	}
	while (continuar != 2);
		printf("Operação Cancelada.\n");
		system("pause");
	return 0;
}
