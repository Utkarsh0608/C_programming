#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter Number of Rows:");
    scanf("%d",&n);
    printf("Enter Number of columns:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1 || i==n){
            printf(" *");
            }
            else if(j==1 || j==m){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}