#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (0, "portuguese");
	
	int num1, num2, soma;
	char resposta = 'S';
	
	while(resposta == 'S'){
		printf("Digite os dois numeros: ");
		scanf("%d %d", &num1, &num2);
		
		soma = num1 + num2;
		
		printf("Soma: %d  ", soma);
		
		printf("Novo calculo? (S/N): ");
		scanf(" %c", &resposta);
		getchar();
	}
	return 0;
	
	
	
}
