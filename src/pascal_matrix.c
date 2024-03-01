#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define NMAX 10

int input(int* n);
double get_factorial(int x);
int* get_pyramid(int n);

int main(void) {
    int n = 0;
    if (input(&n) == 1) {
        fprintf(stderr, "%s", "Puck you, Verter!");
        return 1;
    }
    int size = n * n;
    int arr[size];
    int count = 0;
    int N = 0;
    while (count < size) {
        for (int j = 0; j <= N; j++) {
            arr[count] = round(get_factorial(N) / round((get_factorial(j) * get_factorial(N - j))));
            count++;
        }
        N++;
    }
    int matrix[NMAX][NMAX];
    count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = arr[count];
            printf("%d", matrix[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
            count++;
        }
        if (i != n - 1) {
            printf("\n");
        }
    }
    return 0;
}

int input(int* n) {
    int exit = 0;
    if (scanf("%d", n) != 1 || *n < 1 || *n > 10) exit = 1;
    return exit;
}

double get_factorial(int x) {
    double factorial = 1;
    for (int i = 2; i <= x; i++) {
        factorial *= i;
    }
    return factorial;
}