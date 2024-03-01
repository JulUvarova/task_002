#include <math.h>
#include <stdio.h>

int input(int *n);
void print_base(int n);
double get_factorial(int x);

int main(void) {
    int n = 0;
    if (input(&n) == 1) {
        fprintf(stderr, "%s", "Puck you, Verter!");
        return 1;
    } else {
        print_base(n);
    }
    return 0;
}

int input(int *n) {
    int exit = 0;
    if (scanf("%d", n) != 1 || *n < 1 || *n > 30) exit = 1;
    return exit;
}

void print_base(int n) {
    n--;
    for (int i = 0; i <= n; i++) {
        int bin_coef = round(get_factorial(n) / round((get_factorial(i) * get_factorial(n - i))));
        if (i != n)
            printf("%d ", bin_coef);
        else
            printf("%d", bin_coef);
    }
}

double get_factorial(int x) {
    double factorial = 1;
    for (int i = 2; i <= x; i++) {
        factorial *= i;
    }
    return factorial;
}