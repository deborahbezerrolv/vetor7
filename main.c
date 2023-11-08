#include <stdio.h>
#include <stdlib.h>


 
int main() {
    int tamanho = 7;
    int vetor[tamanho];
    int i;
    int j;
 
    printf("Digite 7 valores inteiros:\n");
    for ( i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
 
    for ( i = 0; i < tamanho - 1; i++) {
        for ( j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
 
    printf("Valores organizados em ordem crescente:\n");
    for ( i = 0; i < tamanho; i++) {
        printf("%d \n", vetor[i]);
    }
 
    return 0;
}

