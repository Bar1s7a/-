#include <stdio.h>
#include <math.h>

int main(void){
    float D, d, a, b, c, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0){
        d = sqrtf(D);
        x1 = (-b + d) / 2*a;
        x2 = (-b - d) / 2*a;
        printf("x1 = %.2f x2 = %.2f", x1, x2);
    } else if (D == 0) {
        x1 = x2 = -d / 2*a;
        printf("x1 = x2 = %.2f", x1);
    } else if (D < 0) {
        printf("Нет ответа!");
    }
}
