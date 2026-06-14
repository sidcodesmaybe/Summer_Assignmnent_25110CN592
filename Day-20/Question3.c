//Write a program to Find row-wise sum
#include<stdio.h>
int main(){
    int sum,r1,c1,i,j;
    printf("ENTER THE ROW");
    scanf("%d",&r1);
    printf("ENTER THE COLUMN");
    scanf("%d",&c1);
        int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("ENTER THE ELEMENT %d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        sum =0;
        for(j=0;j<c1;j++){
            sum+=a[i][j];
        }
    
    printf("SUM IS :%d",sum);
    }
    return 0;
}