#include <stdio.h>

void primeND(int a); //функция поиска наибольшего простого делителя
int isDiv(int a, int b); // проверка на делимость
int isPrime(int b); //проверка числа на простое

int main() {
    int a;
    if ((scanf("%d", &a) == 1) && (getc(stdin) == '\n') && (a != 0))
        primeND((a > 0) ? a : -a);
    else 
        printf("n/a");

    return 0;
}

//функция поиска наибольшего простого делителя
void primeND(int a) {
    for (int i = a; i >= 1; i--) {
        if ((isDiv(a, i)) && (isPrime(i))) {
            printf("%d", i);
            break;
        }
    }
}

// проверка на делимость
int isDiv(int a, int b) {
    int flag = 0;
    for (; a >= 0; a -= b)
    if (a == 0) flag = 1;

    return flag;
}

//проверка числа на простое
int isPrime(int b) {
    int flag = 1;
    for (int i = 2; b > i; i++) {
        if (isDiv(b, i)) {
            flag = 0;
            break;
        }
    }
    
    return flag;
}