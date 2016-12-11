#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Rus");
    int a, b, c, d;
    d = 1; c = 0;
    printf("Введите число\n");
        scanf("%d", &a);
    printf("Введите степень\n");
        scanf("%d", &b);
    if (b > 0){
        while (c < b){
            d = a*d;
            c++;
        }
        printf("Результат %d", d);
        return 0;
    } else if (b == 0){
        printf("Результат 1");
        return 0;
    } else printf("Неправильно!");
    return 0;
}
