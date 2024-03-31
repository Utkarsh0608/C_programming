#include<stdio.h>
int main()
{
    int p;
    printf("Enter Percentage:");
    scanf("%d",&p);
    if(p>80){
        printf("A grade");
    }
    else if(p>60){
        printf("B grade");
    }
    else if(p>40){
        printf("C grade");
    }
    else{
        printf("FAIL");
    }
    return 0;
}