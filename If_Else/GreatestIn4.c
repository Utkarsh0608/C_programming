#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Any Four Numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("%d is Greatest",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is Greatest",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is Greatest",c);
    }
    else{
        printf("%d is Greatest",d);
    }
    return 0;
}