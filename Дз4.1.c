#include <stdio.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Rus");
    int i,N,posNum = 0;
    float average, count = 0;
    printf("\n������� �������� �������\n");
    scanf("%d", &N);
    float arr[N];
    for (i = 0; i < N; i++) {
        scanf ("%f", &arr[i]);
        if (arr[i] > 0){
            posNum++;
            count+=arr[i];
        }
    }
    if (posNum == 0) {
        printf("\n��� ������������� �����");
    } else if (posNum > 0) {
        average = count/posNum;
        printf("���������� ������������� ���������: %d\n������� �������������� ������������� ���������: %.2f", posNum, average);
    }
    return 0;
}
