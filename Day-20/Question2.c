//Write a program to Check symmetric matrix. 
#include<stdio.h>
int main(){
    int i,j,r1,c1;
    printf("ENTER ROW");
    scanf("%d",&r1);
    printf("ENTER COLUMN");
    scanf("%d",&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter the element:%d%d",i,j);
            scanf("%d",a[i][j]);
        }
    }
    int s=1;
    if(r1==c1){
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                if(a[i][j!=a[j][i]]){
                    s=0;
                    break;
                }
            }
        }
        if(s==0){
            printf("SYMMETRIC");
        }
        else
        printf("NOT");
    }
    else
    printf("NOT EQUAL");
    return 0;
}