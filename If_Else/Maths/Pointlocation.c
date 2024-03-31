#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Coordinates:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Points is Origin");
    }
    else if(x==0){
        printf("point on y-axis");
    }
    else if(y==0){
        printf("point on x-axis");
    }
    else{
        printf("Point doesn't lie on x or y axis");
    }
    return 0;
}