#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    r= a % b;
    printf("Remainder when %d is divided by %d: %d",a,b,r);
    return 0;
}