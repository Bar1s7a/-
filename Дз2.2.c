#include <stdio.h>
#include <locale.h>

int main(void) {
    int a, b, c, d;
    setlocale(LC_ALL, "Russian");
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
        printf("��������� %d", d);
        return 0;
    } else if (b == 0){
        printf("��������� 1");
        return 0;
    } else printf("�����������!");
    return 0;
}
