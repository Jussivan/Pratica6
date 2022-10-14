#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int pessoaA, pessoaB;
	printf("Informe a idade da Pessoa A:");
	scanf("%d", &pessoaA);
	printf("Informe a idade da Pessoa B:");
	scanf("%d", &pessoaB);
	if((pessoaA%2==1)||(pessoaB%2==1)) {
		printf("DESCONTO!");
	}
	return 0;
}
