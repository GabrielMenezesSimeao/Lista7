#include <stdio.h>

int main() {
    int a = 5, b = 10;

    if (&a > &b) {
        printf("O maior endereço é: %p\n", (void*)&a);
    } else {
        printf("O maior endereço é: %p\n", (void*)&b);
    }

    return 0;
}
