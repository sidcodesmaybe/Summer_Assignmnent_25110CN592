//MERGE ARRAYS
#include<stdio.h>
int main(){
    int n,i,j;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ElEMENT ");
        scanf("%d",&a[i]);
    }
    printf("ENTER J");
    scanf("%d",&j);
    int b[j];
    for(i=0;i<j;i++){
        printf("ENTER THE ELEMNET ");
        scanf("%d",b[j]);
    }
    int c[j+n];
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<j;i++){
        c[i+n]=b[i];
    }
    for(i=0;i<(n+j);i++){
        printf("%d",c[i]);
    }
    return 0;
}