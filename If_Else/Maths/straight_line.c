#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    printf("Enter All 6 points:");
    scanf("%d %d  %d %d  %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Points fall on one straight line");
    }
    else{
        printf("Points not fall on one straight line");
    }
    return 0;
}