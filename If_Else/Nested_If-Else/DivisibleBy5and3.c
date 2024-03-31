#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("%d is Divisible by 5 and 3",n);
        }
        else{
            printf("%d is not Divisible by 5 and 3",n);
        }
    }
    else{
        printf("%d is not Divisible by 5 and 3",n);
    }
    return 0;
}