#include<stdio.h>
int main()
{
    float a;
    printf("Enter Float Value: ");
    scanf("%f",&a);
    int b=a;
    float c=a-b;
    printf("Fractional Value Of The Number is: %f",c);
    return 0;
}