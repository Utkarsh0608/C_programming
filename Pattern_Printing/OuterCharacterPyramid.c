#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){ //for first line
        char ch=(char)(i+64);
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ //Before space 
            char ch=(char)(a+64);
            printf("%c",ch);
            a++;
        }
        for(int j=1;j<=nsp;j++){  //Space
            printf(" ");
            a++;
        }
        for(int k=1;k<=nst;k++){  //After Space
            char ch=(char)(a+64);
            printf("%c",ch);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}