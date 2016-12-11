#include <stdio.h>

int mail(void) {
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
    } else if (b = 0){
        printf("0");
    } else printf("Неправильно!")
    printf("%d, d")
}





}
