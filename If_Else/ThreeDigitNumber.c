#include<stdio.h>
int main()
{
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("Three Digit Number");
    }
    else{
        printf("Not Three Digit Number");
    }
    return 0;
}