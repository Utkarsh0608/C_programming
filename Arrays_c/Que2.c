#include<stdio.h>
int main(){
    int a[5]={0,1,2,3,4};
    for(int i=0;i<5;i++){
        if(i%2==0) a[i]+=10;
        else a[i]*=2;
        printf("%d ",a[i]);
    }
    return 0;
}