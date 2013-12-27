int is_prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n % 2 == 0) {
        return 0;
    }
    for (i = 3; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse_int(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }
    return reversed;
}

int is_palindrome(int n) {
    return n == reverse_int(n);
}
