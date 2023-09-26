#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (0, "portuguese");
	
	int num1, num2, num3;
	
	printf("Digite os tres números: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1 < num2 && num1 < num3)
		printf("O primeiro numero é o menor");
	else if(num2 < num1 && num2 < num3)
		printf("O segundo numero é o menor");
	else
		printf("O terceiro numero é o menor");
	
	
	
}
