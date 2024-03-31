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
            char ch=(char)(j+64);
            printf("%c",ch);
        }
        int a=i-1;
        for(int j=1;j<=i-1;j++){ //Extra numbers loop
            char ch=(char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}