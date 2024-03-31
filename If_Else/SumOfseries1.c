#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Limit of n:");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<=n;i++){
        if(i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("The Sum is:%d",sum);
    return 0;
}