#include <math.h>
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
    int a = 0, b = 1, tmp, sum = 0;
    while (a < 4000000) {
        tmp = a + b;
        a = b;
        b = tmp;
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

int problem_4(void) {
    int i, j, product = 0;
    for (i = 999; i > 99; i--) {
        for (j = i; j > 99; j--) {
            if (i * j > product && is_palindrome(i * j)) {
                product = i * j;
            }
        }
    }
    return product;
}

int problem_5(void) {
    int i, n = lcm(2, 3);
    for (i = 4; i < 21; i++) {
        n = lcm(n, i);
    }
    return n;
}

int problem_6(void) {
    int i, sum_of_squares = 0, sum;
    for (i = 1; i <= 100; i++) {
        sum_of_squares += pow(i, 2);
    }
    sum = 100 * (100 + 1) / 2;
    return pow(sum, 2) - sum_of_squares;
}

int problem_7(void) {
    int i = 0, n = 0;
    while (n < 10001) {
        i++;
        if (is_prime(i)) {
            n += 1;
        }
    }
    return i;
}

int problem_9(void) {
    int i, j, k;
    for (i = 1000; i > 0; i--) {
      for (j = i - 1; j > 0; j--) {
          k = 1000 - i - j;
          if (triplet(i, j, k)) {
              return i * j * k;
          }
      }
    }
    return 0;
}

int main(void) {
    printf("Problem #1: %i\n", problem_1());
    printf("Problem #2: %i\n", problem_2());
    printf("Problem #3: %i\n", problem_3());
    printf("Problem #4: %i\n", problem_4());
    printf("Problem #5: %i\n", problem_5());
    printf("Problem #6: %i\n", problem_6());
    printf("Problem #7: %i\n", problem_7());
    printf("Problem #9: %i\n", problem_9());
    return 0;
}
