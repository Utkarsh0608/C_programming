#include<stdio.h>
int main()
{
    int l,b,A,P;
    printf("Enter Length: ");
    scanf("%d",&l);
    printf("Enter Breadth: ");
    scanf("%d",&b); 
    A=l*b;
    P=2*(l+b);
    if(A>P){
        printf("Area is greater than perimeter");
    }
    else if(A==P){
        printf("Area is equal to the perimeter");
    }
    else{
        printf("Area is less than perimeter");
    }
    return 0;
}