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
    printf("Попытайтесь угадать число!\n");
    while ( guess != num){
        scanf("%d", &guess);
        if (guess == num){
                printf("Ура!!!");
                return 0;
        } else if (attempt == N){
            printf("Хватит!\n");
        } else if (guess != num){
            printf("Попробуй снова!\n");
        }
        attempt++;
    }
    return 0;
}
