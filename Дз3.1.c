#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main (void){
    int attempt, num, guess;
    attempt = 1;
    srand(time(NULL));
    num = rand() % 10;
    printf("%d \n", num);
    printf("����������� ������� �����!\n");
    while ( guess != num){
        scanf("%d", &guess);
        if (guess == num){
                printf("���!!!");
                return 0;
        } else if (attempt == N){
            printf("������!\n");
        } else if (guess != num){
            printf("�������� �����!\n");
        }
        attempt++;
    }
    return 0;
}
