#include <stdio.h>
#include <locale.h>

int mail(void) {
    int a, b, c, d;
    setlocale (LC_ALL, "Russian");

    d = 1; c = 0;
    printf("������� �����\n");
        scanf("%d", &a);
    printf("������� �������\n");
        scanf("%d", &b);
    if (b > 0){
        while (c < b){
            d = a*d;
            c++;
        }
    } else if (b = 0){
        printf("0");
    } else printf("�����������!")
    printf("%d, d")
}
