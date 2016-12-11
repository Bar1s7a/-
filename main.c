#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
float a, b, c, D, j, x1, x2, x;
scanf("%f %f %f", &a, &b, &c);
    if ( a == 0 ){
        x = c/b;
        printf("x=%d", x);
        return 0;
}
	D=b*b-4*a*c;
	if( D > 0 ){
        j = sqrt(D);
        x1=( - b + j ) / ( 2 * a );
        x2=( - b - j ) / ( 2 * a );
        printf("%f %f\n", x1, x2);
}
	if(D == 0){
        x= - b / ( 2 * a );
        printf("%f\n", x);
}
	if ( D < 0 ){
        puts("Error");
}
printf("%f %f\n", D, j);
printf("%f %f %f", x1, x2, x);
	system ("pause");
	return 0;
}
