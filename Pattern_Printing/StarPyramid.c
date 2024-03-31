#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows:");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        // for(int k=1;k<=2*i-1;k++){  /* (2*n-1) this is AP  */
        //     printf("*");
        // }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}