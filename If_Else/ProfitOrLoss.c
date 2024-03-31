#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price: ");
    scanf("%d",&sp);
    if(cp>sp){
        printf("Seller Incurred Loss");
        printf("\n%d loss incurred",cp-sp);
    }
    if(sp>cp){
        printf("Seller Made Profit");
        printf("\n%d profit made",sp-cp);
    }
    if(cp==sp){
        printf("No Profit No Loss");
    }
    return 0;
}