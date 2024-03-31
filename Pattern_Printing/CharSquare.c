/*#include<stdio.h>
int main()
{
     for(int i=65;i<=68;i++){
        for(int j=65;j<=68;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}*/
/*OR*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}