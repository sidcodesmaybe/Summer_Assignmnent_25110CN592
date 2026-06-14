//Write a program to Find common elements. 
#include<stdio.h>
int main(){
    int x,y,i,j,k,f,c=0;
    printf("Enter the N");
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++){
        printf("ENTER THE ELEMENT:");
        scanf("%d",&a[i]);
    }
    printf("ENTER THE Y");
    scanf("%d",&y);
    int b[y];
    for(i=0;i<y;i++){
        printf("ENTER THE ELEMENT:");
        scanf("%d",&b[i]);
    }
    int d[x];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(a[i]==b[j]){
                d[c]=a[i];
                c++;
                break;
            }
        }
    }
    printf("%d",c);
    return 0;
}