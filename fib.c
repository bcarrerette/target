#include <stdio.h>
#include <math.h>

int isFibonacci(int n) {
    //Checando para 0 e 1
    int a = 0, b = 1, fib;
    if (n == 0 || n == 1) {
        return 1;
    }
    //Checando para outros numeros usando o método mais simples de recorrencia
    while (b < n) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return (b == n);
}

int main() {
    int num;
    
    //Entrada
    printf("Digite um número: ");
    scanf("%d", &num);
    
    //Execução da função
    if (isFibonacci(num)) 
        printf("%d pertence à sequência de Fibonacci.\n", num); 
    else 
        printf("%d não pertence à sequência de Fibonacci.\n", num);    
    system("pause");
    return 0;
}