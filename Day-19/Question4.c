//Write a program to Find diagonal sum.
#include<stdio.h>
int main(){
    int r1,c1,i,j,s=0,s1=0;
    printf("ENTER ROW");
    scanf("%d",&r1);
    printf("ENTER COLUMUN");
    scanf("%d",&c1);
    int n=c1;
    int a[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf(" ELEMENT %d%d :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    if(r1==c1){
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                if(i==j){
            s+=a[i][j];
                }
        if(i+j==n-1){
            s1+=a[i][j];
        }
    }
    }
  printf("SUM OF 1ST DIAGONAL :%d",s);
  printf("SUM IS:%d",s1);
}
else 
    printf("WRONG");
    return 0;
}