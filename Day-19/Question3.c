//Write a program to Transpose matrix.
#include<stdio.h>
int main(){
    int r1,c1,i,j;
    printf("ENTER ROW");
    scanf("%d",&r1);
    printf("ENTER COLUMUN");
    scanf("%d",&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf(" ELEMENT %d%d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("TRANSPOSE MATRIX:\n");
    for(i=0;i<c1;i++){
        for(j=0;j<r1;j++)
        printf("%d ",a[j][i]);
        printf("\n");
    }

    return 0;
}