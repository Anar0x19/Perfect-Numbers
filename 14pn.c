#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

long long perfect_number(int p) {
    return (1LL << (p - 1)) * ((1LL << p) - 1);
}

int main() {
    int limit = 15;
    int p = 2;
    int found = 0;
    printf("Perfect %d Numbers:\n", limit);
    while (found < limit) {
        if (is_prime((1 << p) - 1)) {
            long long perfect = perfect_number(p);
            printf("%llu\n", perfect);
             found++;
        }
        p++;
    }
    return 0;
}

 
