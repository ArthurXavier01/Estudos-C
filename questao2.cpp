#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (0,"portuguese");
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num >= 10 && num <= 15)
		printf("O numero est� contido");
	else
		printf("N�o est� contido");
	
}
