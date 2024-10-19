#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A = 1, B = 2;

    printf("Antes da troca: A = %d, B = %d\n", A, B);
    trocar(&A, &B);
    printf("Após a troca: A = %d, B = %d\n", A, B);

    return 0;
}
