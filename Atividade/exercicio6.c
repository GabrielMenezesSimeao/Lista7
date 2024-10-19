#include <stdio.h>

int verificaSubstring(char *str1, char *str2) {
    while (*str1) {
        char *p1 = str1;
        char *p2 = str2;

        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (!*p2) return 1; // Encontrou a substring
        str1++;
    }
    return 0; // Não encontrou
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "World";

    if (verificaSubstring(str1, str2)) {
        printf("A substring '%s' foi encontrada em '%s'.\n", str2, str1);
    } else {
        printf("A substring '%s' não foi encontrada em '%s'.\n", str2, str1);
    }

    return 0;
}
