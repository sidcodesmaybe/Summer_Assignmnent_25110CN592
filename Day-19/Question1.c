//Write a program to add matrices
#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j;
    printf("ENTER ROW");
    scanf("%d",&r1);
    printf("ENTER COLUMUN");
    scanf("%d",&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf(" %d%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER ROW");
    scanf("%d",&r2);
    printf("ENTER COLUMUN");
    scanf("%d",&c2);
    int b[r2][c2];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf(" %d%d",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int c[r1][c1];
    if(c1==c2&&r1==r2){
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("ADDED MATRIX\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("DIFFERENT MATRICES\n");
    return 0;
}