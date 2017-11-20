// JAYNE DE OLIVEIRA oliveirajne@gmail.com

/*
valor a ser recebido por venda pode ser alterado no define
201710141736 implementada funcao para alterar a meta
201711200230 implementada opcao no menu para configurar meta, valores e faltas permitidas
*/

#include <stdio.h>
#include <stdlib.h>

int _meta = 0;
float _valor = 0;
int _faltas = 0;

void getparametros();
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
	printf("\t\tPressione 2 para configurar parametros.\n");
	printf("\t\tPressione 0 para sair.\n\n\n");
	scanf("%d", &escolha);
	fflush(stdin);

	while (escolha != 0) {
		switch (escolha) {

		case 0:
			break;
		case 1:
			desempenho();
        case 2:
            getparametros();
		default:
			printf("\n\t\tEntrar(1)/Configuracoes(2)/Sair(0)\n\n\n");
			scanf("%d", &escolha);
			fflush(stdin);
			continue;
		}
	}

//	system("pause");
	return 0;


}

void getparametros() {
    int metabase, param_faltas;
    float param_valor;
    printf("\n Informe a meta base de vendas: \n");
    scanf("%d", &metabase);
    fflush(stdin);
    printf("\n Informe o valor pago por venda: \n");
    scanf("%f", &param_valor);
    fflush(stdin);
    printf("\n Informe a quantidade maxima permitida de faltas: \n");
    scanf("%d", &param_faltas);
    fflush(stdin);

    _meta = metabase;
    _valor = param_valor;
    _faltas = param_faltas;

    system("pause");
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

	if ((final >= 100) && (abs <= _faltas)) {

        rv = ((final * _meta) / 100) * _valor;
        printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
        printf("\t\n Valor a ser recebido: %.2f \n\n", rv);

	}
	else if ((final >= 100) && (abs > _faltas)) {
		printf("\t\n\n O desempenho em relacao a meta foi de: %d por cento", final);
		printf("\t\n Mas devido a quantidade de faltas, nao havera remuneracao variavel\n\n");
	}
	else {
		printf("\t\n\n O desempenho minimo nao foi alcancado: %d por cento\n\n", final);
	}

	system("pause");


}
