#include<stdio.h>
int main()
{
    int a,b,r,q;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    q=a/b;
    r=a-(b*q);
    printf("Remainder when %d is divided by %d: %d",a,b,r);
    return 0;
}