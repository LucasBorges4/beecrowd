#include <stdio.h>
#include <stdlib.h>
#define MOD 1000000007
#define MAX_TAM 1000

size_t a, b, c, d;

// Função para calcular o N-ésimo número de Fibonacci usando o método de duplicação rápida
void FastDoubling(size_t n, size_t res[]) {
    // Condição base
    if (n == 0) {
        res[0] = 0;
        res[1] = 1;
        return;
    }
    FastDoubling((n / 2), res);
    // Aqui a = F(n)
    a = res[0];
    // Aqui b = F(n+1)
    b = res[1];
    c = 2 * b - a;
    if (c < 0)
        c += MOD;
    // Como F(2n) = F(n)[2F(n+1) – F(n)]
    // Aqui c = F(2n)
    c = (a * c) % MOD;
    // Como F(2n + 1) = F(n)^2 + F(n+1)^2
    // Aqui d = F(2n + 1)
    d = (a * a + b * b) % MOD;
    // Verifica se N é ímpar ou par
    if (n % 2 == 0) res[0] = c, res[1] = d;
    else res[0] = d, res[1] = c + d;
}

void Fibonacci(size_t length, size_t solution[length], size_t res[2]) {
    // Condições iniciais para Fibonacci(0) e Fibonacci(1)
    solution[0] = 0;
    solution[1] = 1;

    for (size_t i = 2; i < length; i+=2) {
        FastDoubling(i, res);
        solution[i] = res[0], solution[i + 1] = res[1]; // Utilizamos ambos os slots de res para calcular o próximo valor de Fibonacci
    }
}

long pisano(long m)
{
    long prev = 0;
    long curr = 1;
    long res = 0;
 
    for(int i = 0; i < m * m; i++) 
    {
        long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}
 
// Calculate Fn mod m
long fibonacciModulo(long n, long m)
{
     
    // Getting the period
    long pisanoPeriod = pisano(m);
 
    n = n % pisanoPeriod;
 
    long prev = 0;
    long curr = 1;
 
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
 
    for(int i = 0; i < n - 1; i++)
    {
        long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
    }
    return curr % m;
}
 

// Função principal

int main() {
    size_t N, M;
    while (scanf("%zu %zu", &N, &M) != EOF) {
        size_t res[2] = {0};
        size_t fibN[MAX_TAM];
        
        Fibonacci(N, fibN, res);

        size_t finalResult = fibonacciModulo(fibN[fibN[N]], M);
        printf("%zu\n", finalResult);
    }

    return 0;
}
