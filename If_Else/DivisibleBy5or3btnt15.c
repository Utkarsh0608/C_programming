#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("%d is matching with required condition",n);
    }
    else{
        printf("%d is not matching with required condition",n);
    }
    return 0;
}