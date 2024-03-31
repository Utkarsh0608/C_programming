#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        if(i<=n+1){
            printf("%d",i);
        }
        else{
            printf("%d",(2*n+2)-i);
        }
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ //Before space 
            printf("%d",a);
            a++;
        }
        a--;
        for(int k=1;k<=nsp;k++){  //Space
            printf(" ");
        }
        for(int j=1;j<=nst;j++){  //After Space
            printf("%d",a);
            a--;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}