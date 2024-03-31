#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ //Space print ke liye loop
            printf(" ");
        }
        for(int j=1;j<=i;j++){ //Number Triangle loop
            printf("%d",j);
        }
        int a=i-1;
        for(int j=1;j<=i-1;j++){ //Extra numbers loop
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}