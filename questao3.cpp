#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (0, "portuguese");
	
	int num1, num2, num3;
	
	printf("Digite os tres n�meros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1 < num2 && num1 < num3)
		printf("O primeiro numero � o menor");
	else if(num2 < num1 && num2 < num3)
		printf("O segundo numero � o menor");
	else
		printf("O terceiro numero � o menor");
	
	
	
}
