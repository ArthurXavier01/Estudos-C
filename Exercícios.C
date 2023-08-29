#include <stdio.h>

int main()
{
	printf("Meu primeiro programa em C \n");
	printf("testando \n");
	
	int i = 10;
	float r = 7.104;
	printf("inteiro: %d, Real: %.2f \n", i, r);
	
	int soma = (2 + 2);
	printf("2 + 2 = %d \n", soma);
	
	int numero;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	printf("O numero digitado foi: %d \n", numero);
	
	
	
	int number;
	
	printf("Entre com um valor: ");
	scanf("%d", &number);
	getchar();
	printf("Esse foi o valor digitado: %d", number);
	getchar();
	
	
	int num;
	float nota;
	
	printf("Digite um valor: \n");
	scanf("%d", &num);
	getchar();
	
	printf("Digite a media: \n");
	scanf("%f", &nota);
	getchar();
	getchar();
}



#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(0,"Portuguese");
	
	
// Primeiro Exercicio
	
	float soma;
	float x, y;

	printf("Digite as notas: ");
	scanf("%f %f", &x, &y);
	
	soma = x + y;
	
	if(soma >= 6){
		printf("Aluno Aprovado");
	}
	else if(soma >= 1 && soma < 6){
		printf("Aluno está de Final");
	}
	else{
		printf("Reprovado horroroso");
	}


// Segundo Exercicio	
	
	int numero;
	float resultado;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	resultado = numero % 2;
	
	if(resultado == 0 )
		printf("O numero lido foi %d e é par", numero);
	else
		printf("O numero lido é %d e é impar", numero);

// Terceiro exercicio


	int idade;

	printf("Digite o ano de nascimento do nadador para avaliação: ");
	scanf("%d", &idade);
	
	if( idade >= 5 && idade <= 7)
		printf("Infantil A, com idade:   %d", idade);
	else if( idade >= 8 && idade <= 10)
		printf("Infantil B, com idade:   %d", idade);
	else if (idade >= 11 && idade <= 13)
		printf("Juvenil A, com idade:  %d", idade);
	else if (idade >= 14 && idade <= 17)
		printf("Juvenil B, com idade:  %d", idade);
	else if (idade <5)
		printf("não esta apto, com idade:  %d ", idade);
	else
		printf("Senior, com idade: %d ", idade);
	
	
}
