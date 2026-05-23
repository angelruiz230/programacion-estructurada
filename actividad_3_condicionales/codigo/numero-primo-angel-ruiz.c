#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num ;
    scanf("%d",&num);
    if (esPrimo(num))
        printf("%d es primo.\n", num);
    else
        printf("%d no es primo.\n", num);
    return 0;
}