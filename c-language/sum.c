#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    d= a+b+c;
    printf("the sum of %d , %d , %d = %d",a,b,c,d);

    return 0;
}