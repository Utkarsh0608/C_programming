#include<stdio.h>
int main()
{
     for(int i=1;i<=7;i=i+2){
        for(int j=1;j<=i;j=j+2){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}