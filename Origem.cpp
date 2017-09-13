// JAYNE DE OLIVEIRA


#include <stdio.h>
#include <stdlib.h>
#define meta 50

int realizado();
int faltas();
int calcula();
void desempenho();


int main() {
	int escolha;

	printf("\n\t\t\t***********************\n");
	printf("\t\t\t**CALCULO DE VARIAVEL**\n");
	printf("\t\t\t***********************\n");
	printf("\n\t\tINSTRUCOES:");
	printf("\n\t\tPressione 1 para inserir a quantidade\n\t\tde vendas realizadas pelo colaborador.\n");
	printf("\t\tO sistema realizara o calculo e mostrara \n\t\to desempenho e valor a ser recebido.\n");
	printf("\t\tPressione 0 para sair.\n\n\n");
	scanf_s("%d", &escolha);
	fflush(stdin);

	while (escolha != 0) {
		switch (escolha) {

		case 0:
			break;
		case 1:
			desempenho();




		default:
			printf("\t\tEntrar(1)/Sair(0)\n\n\n");
			scanf_s("%d", &escolha);
			fflush(stdin);
			continue;
		}
	}

	system("pause");
	return 0;


}


int realizado() {
	int qnt;
	printf("Digite a quantidade de vendas: \n");
	scanf_s("%d", &qnt);
	fflush(stdin);

	return qnt;

}


int faltas() {
	int flt;
	printf("Quantidade de faltas: \n");
	scanf_s("%d", &flt);
	
	return flt;
}


int calcula(){
	int quantidade, base;
	
	quantidade = realizado();

	base = (quantidade * 100) / meta;



	return base;
}


void desempenho() {
	int final, abs;
	final = calcula();
	abs = faltas();

	if ((final >= 70) && (abs < 2)) {
		printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento\n\n", final);
	}
	else if ((final >= 70) && (abs >= 2)) {
		printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
		printf("\t\n Mas devido a quantidade de faltas, nao havera remuneracao variavel\n\n");
	}
	else {
		printf("\t\n\n O desempenho minimo nao foi alcancado: %d por cento\n\n", final);
	}
	
	system("pause");


}
