#include <stdio.h>

void print_num(int num) {
    if (num < 10) {
        printf("%d ", num);
    } else {
        print_num(num / 10); 
        printf("%d ", num % 10); 
    }
}

void print_range(int A, int B) {
    if (A == B) {
        printf("%d ", A);
        return;
    }
    if (A < B) {
        printf("%d ", A);
        print_range(A + 1, B);
    } else {
        printf("%d ", A);
        print_range(A - 1, B);
    }
}

int count_ones(int N) {
    if (N == 0) {
        return 0;
    } else {
        return (N % 2) + count_ones(N / 2); 
    }
}

void print_odd_sequence() {
    int num;
    scanf("%d", &num);
    if (num == 0) {
        return;
    }
    if (num % 2 != 0) {
        printf("%d ", num);
    }
    print_odd_sequence(); 
}

int acounter(void) {
    char ch;
    scanf("%c", &ch);
    if (ch == '.') {
        return 0;
    }
    if (ch == 'a') {
        return 1 + acounter(); 
    } else {
        return acounter(); 
    }
}

int recurs_power(int n, int p) {
    if (p == 0) {
        return 1;
    } else {
        return n * recurs_power(n, p - 1); 
    }
}

int main() {
    int num;
    printf("Введите натуральное число для задачи 1: ");
    scanf("%d", &num);
    printf("Цифры числа %d в прямом порядке: ", num);
    print_num(num);
    printf("\n");

    int A, B;
    printf("Введите два целых числа для задачи 2: ");
    scanf("%d %d", &A, &B);
    printf("Последовательность чисел от %d до %d: ", A, B);
    print_range(A, B);
    printf("\n");

    printf("Введите натуральное число для задачи 3: ");
    scanf("%d", &num);
    printf("Количество единиц в двоичной записи числа %d: %d\n", num, count_ones(num));

    printf("Введите последовательность целых чисел для задачи 4 (число 0 завершает ввод): ");
    print_odd_sequence();
    printf("\n");

    printf("Введите строку для задачи 5 (завершите точкой): ");
	getchar();
    int count = acounter();
    printf("Количество символов 'a' в строке: %d\n", count);

    int n, p;
    printf("Введите два целых числа для задачи 6 (n возвести в степень p): ");
    scanf("%d %d", &n, &p);
    printf("%d в степени %d: %d\n", n, p, recurs_power(n, p));

    return 0;
}
