#include<stdio.h>
int main()
{
    int r;
    float pi=3.1415,A;
    printf("Enter Radius: ");
    scanf("%d",&r);
    A= pi* r * r ;
    printf("Area of circle is: %f",A);
    return 0;
}