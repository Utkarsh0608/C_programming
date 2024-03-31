#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter Age Of Ram: ");
    scanf("%d",&ram);
     printf("Enter Age Of Shyam: ");
    scanf("%d",&shyam);
     printf("Enter Age Of Ajay: ");
    scanf("%d",&ajay);
    if(ram<shyam && ram<ajay){
        printf("Ram is Youngest");
    }
    else if(shyam<ram && shyam<ajay){
        printf("Shaym is Youngest");
    }
    else{
        printf("Ajay is Youngest");
    }
    return 0;
}