#include <stdio.h>

#include "utils.h"

int problem_1(void) {
    int i, sum = 0;
    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int problem_2(void) {
    int a = 0, b = 1, c, sum = 0;
    while (a < 4000000) {
        c = a + b;
        a = b;
        b = c;
        if (a % 2 == 0) {
          sum += a;
        }
    }
    return sum;
}

int problem_3(void) {
    unsigned long long n = 600851475143;
    int i = 0, largest_factor;
    while (i * i <= n) {
        i++;
        if (is_prime(i) && n % i == 0) {
            largest_factor = i;
        }
    }
    return largest_factor;
}

int main(void) {
    printf("Problem #1: %i\n", problem_1());
    printf("Problem #2: %i\n", problem_2());
    printf("Problem #2: %i\n", problem_3());
    return 0;
}
