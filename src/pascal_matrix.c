#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define NMAX 10

int input(int* n);
void fill_matrix(int matrix[NMAX][NMAX], int* arr, int n);
double get_factorial(int x);
void output(int matrix[NMAX][NMAX], int n);
int* get_pyramid(int n);

int main(void) {
    int n = 0;
    if (input(&n) == 1) {
        fprintf(stderr, "%s", "Puck you, Verter!");
        return 1;
    }
    int* arr = get_pyramid(n);
    int matrix[NMAX][NMAX];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // matrix[i][j] = 0;
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
    // fill_matrix(matrix, arr, n);
    // output(matrix, n);
    free(arr);
    return 0;
}

int input(int* n) {
    int exit = 0;
    if (scanf("%d", n) != 1 || *n < 1 || *n > 10) exit = 1;
    return exit;
}

// void output(int matrix[NMAX][NMAX], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d", matrix[i][j]);
//             if (j != n - 1) {
//                 printf(" ");
//             }
//         }
//         if (i != n - 1) {
//             printf("\n");
//         }
//     }
// }

// void fill_matrix(int matrix[NMAX][NMAX], int* arr, int n) {
//     printf("я тут\n");
//     int count = 0;
//     while (count < n * n) {
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 matrix[i][j] = arr[count];
//             printf("%d ", arr[count]);

//                count++;
//             }
//         }
//     }
// }

int* get_pyramid(int n) {
    int size = n * n;
    int* arr = malloc(sizeof(int) * size);
    int count = 0;
    int i = 0;
    while (count < size) {
        for (int j = 0; j <= i; j++) {
            arr[count] = round(get_factorial(i) / round((get_factorial(j) * get_factorial(i - j))));
            // printf("%d ", arr[count]);
            count++;
        }
        i++;
    }
    // printf("\n");
    return arr;
}

double get_factorial(int x) {
    double factorial = 1;
    for (int i = 2; i <= x; i++) {
        factorial *= i;
    }
    return factorial;
}