#include <stdio.h>
int main() {
int a;
scanf("%d",&a);
if (a>0){
    printf("%d",2*a);
}
else if (a<0) {
    printf("%d",a*3);
}   else printf("10");
return 0;
}
