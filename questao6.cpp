/* Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado; Porexemplo, se ele informar 5 por 5, o desenho ficará assim:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X*/

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale (0, "portuguese")
	
    int tamanho;

    printf("Digite o valor para o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    for(int x = 0; x < tamanho; x++) {
        for(int a = 0; a < tamanho; a++) {
            printf("X ");
        }
        
        
        printf("\n");
        
        
    }

}

