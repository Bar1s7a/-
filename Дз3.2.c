#include <stdio.h>
#include <locale.h>

int main (void){
    setlocale(LC_ALL, "Rus");
    int choose;
    float cels, fahr, kelv;
    printf("�������� ������ �����������:\n 1)�������\n 2)���������\n 3)������\n (��� ������ ����������� �����.)");
    scanf("%d", &choose);
    switch (choose){
        case 1:{
            printf("������� �����������.\n");
            scanf("%f", &cels);
            fahr = cels * 9 / 5 + 32;
            kelv = cels + 273;
            printf("%.2f %.2f", fahr, kelv);
            return 0;
        }
        case 2:{
            printf("������� �����������.\n");
            scanf("%f", &fahr);
            cels = (fahr - 32)* 5 / 9;
            kelv = (fahr - 32)* 5 / 9 + 273;
            printf("%.2f %.2f", cels, kelv);
            return 0;
        }
        case 3:{
            printf("������� �����������.\n");
            scanf("%f", &kelv);
            if (kelv >= 0){
                cels = kelv - 273;
                fahr = (kelv - 273) * 5 / 9 + 32;
                printf("%.2f %.2f", cels, fahr);
                return 0;
            } else if (kelv < 0){
                printf("����������!");
                return 0;
            }
        }
    }
    return 0;
}
