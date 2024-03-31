#include<stdio.h>
int main(){
    int marks[10]={40,60,78,32,76,17,34,90,28,56};
    for(int i=0;i<10;i++){
        if(marks[i]<35) printf("%d ",i);
    }
    return 0;
}