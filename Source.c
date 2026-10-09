#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main(void) {
    int a, b, c;
    int condition;

    setlocale(LC_CTYPE, "RUS");

    printf("Введите силу героя A: ");
    scanf("%d", &a);

    printf("Введите силу героя B: ");
    scanf("%d", &b);

    printf("Введите силу героя C: ");
    scanf("%d", &c);

    condition = (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0);

    printf("Способность активирована (1 - да, 0 - нет): %d\n", condition);

    return 0;
}
