#include <stdio.h>

void frac(float num, int* inteiro, float* frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main() {
    float num = 5.75;
    int inteiro;
    float fracionario;

    frac(num, &inteiro, &fracionario);
    printf("Número: %.2f, Parte inteira: %d, Parte fracionária: %.2f\n", num, inteiro, fracionario);

    return 0;
}
