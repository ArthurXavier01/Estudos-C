/* 7. Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar e diga quantas vezes este n�mero est�presente no vetor.*/

#include <stdio.h>
#include <locale.h>


int main() {
	
	setlocale (0, "portuguese");
	
    int limite;

    printf("Digite a quantidade limite de n�meros: ");
    scanf("%d", &limite);

    int vetor[limite], count3 = 0;;

    for(int i = 0; i < limite; i++) {
        printf("Digite o numero de posi��o %d : ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] == 3) {
            count3++;
        }
    }
    printf("O numero 3 aparece %d vezes \n", count3);

    int numProcurado, countNumProcurado = 0;

    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &numProcurado);

    for(int i = 0; i < limite; i++) {
        if(vetor[i] == numProcurado) {
            countNumProcurado++;
        }
    }
    printf("O numero %d aparece %d vezes \n", numProcurado, countNumProcurado);
}

