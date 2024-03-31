#include<stdio.h>
int main()
{
    int r;
    float pi=3.1415,v;
    printf("Enter Radius: ");
    scanf("%d",&r);
    v= (4 * pi * r * r * r) /3;
    printf("The Volume of Sphere is: %f",v);
    return 0;
}