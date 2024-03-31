#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er)  rightways +=maze(cr,cc+1,er,ec);
    if(cc==ec)  downways +=maze(cr+1,cc,er,ec);
    if(cr<er && cc<ec){
        rightways +=maze(cr,cc+1,er,ec);
        downways +=maze(cr+1,cc,er,ec);
    }
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int rows,coloumn;
    printf("Enter Number Of Rows:");
    scanf("%d",&rows);
    printf("Enter Number Of Columns:");
    scanf("%d",&coloumn);
    int NoOfWays=maze(1,1,rows,coloumn);
    printf("%d",NoOfWays);
    return 0;
}