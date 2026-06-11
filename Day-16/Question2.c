//Write a program to Find maximum frequency element.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    int c;
    int m=0;
    int w=a[0];
    for(i=0;i<n;i++){
        int c=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j])
            c++;
        }
    if(c>m){
        m=c;
        w=a[i];
    }
}
    printf("NUMBER %d: %d TIMES",w,m);
    return 0;
}
