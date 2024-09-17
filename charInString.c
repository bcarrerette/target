#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int count = 0;
    
    //Entrada
    printf("Digite uma string: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    //Percorre a string e incrementa quando acha um a
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            count++;
        }
    }
    
    // Verifica se a letra 'a' foi encontrada e imprime a quantidade
    if (count > 0) 
        printf("A letra 'a' ou 'A' aparece %d vez(es).\n", count);
    else 
        printf("A letra 'a' ou 'A' não foi encontrada.\n");
    
    system("pause");
    return 0;
}