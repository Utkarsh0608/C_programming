#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("%d is Divisible by 5 or 3 but not 15",n);
        }
        else{
            printf("%d is Divisible by 5 or 3 but also by 15",n);
        }
    }
    else{
        printf("%d is not Divisible by 5 or 3",n);
    }
    return 0;
}