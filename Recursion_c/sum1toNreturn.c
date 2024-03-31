#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    int add=sum(n);
    printf("%d",add);
    return 0;
}