#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char letra = 'A';

    int *pInt = &inteiro;
    float *pFloat = &real;
    char *pChar = &letra;

    printf("Antes da modificação:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, letra);

    *pInt = 20;
    *pFloat = 10.5;
    *pChar = 'B';

    printf("Após a modificação:\n");
    printf("Inteiro: %d, Real: %.2f, Char: %c\n", inteiro, real, letra);

    return 0;
}
