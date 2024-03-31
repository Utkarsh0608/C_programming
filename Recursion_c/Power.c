#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    printf("Enter Base:");
    scanf("%d",&a);
    int b;
    printf("Enter Exponent:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d is raised by %d =%d",a,b,p);
    return 0;
}