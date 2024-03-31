#include<stdio.h>
int main()
{
    int R,S,A;
    printf("Enter Age of RAM:");
    scanf("%d",&R);
    printf("Enter Age of SHYAM:");
    scanf("%d",&S);
    printf("Enter Age of AJAY:");
    scanf("%d",&A);
    if(R<S){
        if(R<A){
            printf("Ram is Youngest");
        }
        else{
            printf("Ajay is Youngest");
        }
    }
    else{
        if(S<A){
            printf("Shyam is Youngest");
        }
        else{
            printf("Ajay is Youngest");
        }
    }
    return 0;
}