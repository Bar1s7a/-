#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Rus");
    int row1, clm1, row2, clm2, i, j, x=0, y=0, z=0, k=0, sum=0;
        printf("Введите размерность массива");
        scanf("%d %d %d %d", &row1, &clm1, &row2, &clm2);
    if(clm1!=row2){
        printf("ОШИБКА");
        return 0;
    }
    int arr1[row1][clm1], arr2[row2][clm2], arr3[row1][clm2];
    for( i = 0; i < row1; i++ ){
        printf("Введите количество %d строк\n", i+1);
        for ( j = 0; j < clm1; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for( i = 0; i < row2; i++){
        printf("Введите количество %d строк\n", i+1);
        for ( j = 0; j < clm2; j++ ){
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Вам нужно умножить массивы");

    for( i = 0; i < row1; i++){
        for ( j = 0; j < clm1; j++){
            printf("arr1[%d][%d]=%d", i+1, j+1, arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < row2; i++){
        for ( j = 0; j < clm2; j++){
            printf("arr2[%d][%d]=%d", i+1, j+1, arr2[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < row1; i++ ){
        for ( j = 0; j < clm2; j++ ){
            arr3[i][j] = 0;
        }
        z = 0;
        x = 0;
        j = 0;
        while ( 1 )
        {
            arr3[i][j] += arr1[i][z]*arr2[x][j];
            if ( z = (row1 - 1) && x == (row2 - 1)){
                if ( j != (clm2 - 1)){
                    z = 0;
                    x = 0;
                    j++;
                } else break;
            } else {
                z++;
                x++;
            }
        }
    }
    printf("\n");

    for( i = 0; i < row1; i++){
        for ( j = 0; j < clm2; j++){
            printf("arr3[%d][%d]=%d", i+1, j+1, arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
