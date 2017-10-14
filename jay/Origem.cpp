// JAYNE DE OLIVEIRA oliveirajne@gmail.com

/*
valor a ser recebido por venda pode ser alterado no define
201710141736 implementada funcao para alterar a meta
*/

#include <stdio.h>
#include <stdlib.h>

#define var1 6
#define var2 10
#define var3 14

int _meta = 0;
void getmeta();

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
	scanf("%d", &escolha);
	fflush(stdin);

	while (escolha != 0) {
		switch (escolha) {

		case 0:
			break;
		case 1:
		    getmeta();
			desempenho();

		default:
			printf("\n\t\tEntrar(1)/Sair(0)\n\n\n");
			scanf("%d", &escolha);
			fflush(stdin);
			continue;
		}
	}

//	system("pause");
	return 0;


}

void getmeta() {
    int metabase;
    printf("Informe a meta base de vendas: \n");
    scanf("%d", &metabase);
    fflush(stdin);

    _meta = metabase;

}


int realizado() {
	int qnt;
	printf("Digite a quantidade de vendas: \n");
	scanf("%d", &qnt);
	fflush(stdin);

	return qnt;

}


int faltas() {
	int flt;
	printf("Quantidade de faltas: \n");
	scanf("%d", &flt);

	return flt;
}


int calcula() {
	int quantidade, base;

	quantidade = realizado();

	base = (quantidade * 100) / _meta;

	return base;
}


void desempenho() {
	int final, abs;
	float rv;
	final = calcula();
	abs = faltas();

    printf("\n*******************************\n");
	if ((final >= 70) && (abs < 2)) {
		if ((final >= 70) && (final < 100)) {
			rv = ((final * _meta) / 100) * var1;
			printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
			printf("\t\n Valor a ser recebido: %.2f \n\n", rv);
		}
		else if ((final >= 100) && (final < 130)) {
			rv = ((final * _meta) / 100) * var2;
			printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
			printf("\t\n Valor a ser recebido: %.2f \n\n", rv);
		}
		else {
			rv = ((final * _meta) / 100) * var3;
			printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
			printf("\t\n Valor a ser recebido: %.2f \n\n", rv);
		}
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
