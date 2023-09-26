#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (0, "portuguese");
	
	int nascimento, idade;
	
	printf("Digite o ano de nascimento do nadador: ");
	scanf("%d", &nascimento);
	
	idade = 2021 - nascimento;
	
	
	if(idade >= 5 && idade <= 7)
		printf("Nadador de idade: %d, Categoria: Infantil A", idade);
	else if(idade >= 8 && idade <= 10)
		printf("Nadador de idade: %d, Categoria: Infantil B", idade);
	else if(idade >= 11 && idade <= 13)
		printf("Nadador de idade: %d, Categoria: Juvenil A", idade);
	else if(idade >= 14 && idade <= 17)
		printf("Nadador de idade: %d, Categoria: Juvenil B", idade);
	else if(idade > 17 && idade < 80)
		printf("Nadador de idade: %d, Categoria: Senior", idade);
	else
		printf("Idade Inválida", idade);
		
	
	
	
	
}
