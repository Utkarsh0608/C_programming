#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    //Ternary Operator
    //exp1 ? exp2 : exp3 ;
    n%2==0 ? printf("Even Number") :  printf("Odd Number") ;   
    return 0;
}