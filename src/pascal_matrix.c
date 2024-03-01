#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define NMAX 10

int input(int* n);
void output(int** matrix, int n);
double get_factorial(int x);
int* get_pyramid(int n);
int** get_matrix(int n, const int* arr);

int main(void) {
    int n = 0;
    if (input(&n) == 1) {
        fprintf(stderr, "%s", "Puck you, Verter!");
        return 1;
    }
    int* arr = get_pyramid(n);
    int** matrix = get_matrix(n, arr);
    output(matrix, n);
    free(arr);
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
        ;
    }
    free(matrix);
    return 0;
}

int* get_pyramid(int n) {
    int size = n * n;
    int* arr = malloc(sizeof(int) * size);
    int count = 0;
    int N = 0;
    while (1) {
        for (int j = 0; j <= N; j++) {
            arr[count] = round(get_factorial(N) / round((get_factorial(j) * get_factorial(N - j))));
            count++;
            if (count == size) break;
        }
        N++;
        if (count == size) break;
    }
    return arr;
}

int** get_matrix(int n, const int* arr) {
    int** matrix = malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(sizeof(int) * n);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = arr[count];
            count++;
        }
    }
    return matrix;
}

int input(int* n) {
    int exit = 0;
    if (scanf("%d", n) != 1 || *n < 1 || *n > NMAX) exit = 1;
    return exit;
}

void output(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) printf(" ");
        }
        if (i != n - 1) printf("\n");
    }
}

double get_factorial(int x) {
    double factorial = 1;
    for (int i = 2; i <= x; i++) {
        factorial *= i;
    }
    return factorial;
}