#include<stdio.h>
void increasing(int a,int b){
    if(a>b) return;
    printf("%d\n",a);
    increasing(a+1,b);
    return;
}
int main(){
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}