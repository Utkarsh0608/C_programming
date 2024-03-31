#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d element of arr:",i);
        scanf("%d",&arr[i]);
    }
    // int max=-1;
    int max=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("Minimum Value Of Array:%d",max);
    return 0;
}