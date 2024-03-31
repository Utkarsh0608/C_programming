#include<stdio.h>
int power(int a,int b){
    if(b==1) return a;
    int x=power(a,b/2);
    if(b%2==0){
        return x*x;
    } 
    else{
        return x*x*a;
    }
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