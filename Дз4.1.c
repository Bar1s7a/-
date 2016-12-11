#include <stdio.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Rus");
    int i,N,posNum = 0;
    float average, count = 0;
    printf("\nВведите элементы массива\n");
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
        printf("\nНет положительных чисел");
    } else if (posNum > 0) {
        average = count/posNum;
        printf("Количество положительных элементов: %d\nСреднее арифметическое положительных элементов: %.2f", posNum, average);
    }
    return 0;
}
