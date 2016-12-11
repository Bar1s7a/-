#include<stdio.h>

int main() {
int a, b =0, c = 1;
scanf("%d", &a);
    while ( a > 0 ) {
		b = b + a%10*c;
		c *=2;
		a = a / 10;
}
printf("%d", b);
system ("pause");
return 0;
}
