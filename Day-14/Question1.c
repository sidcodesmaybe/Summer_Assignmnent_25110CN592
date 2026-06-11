/*Write a program to Linear search.*/
#include<stdio.h>
int main(){
    int n;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT\n");
        scanf("%d",&a[i]);
    }
    int s;
    printf("ENTER THE ELEMENT TO SEARCH\n");
    scanf("%d",&s);
    int f=0;
    for(i=0;i<n;i++){
        if(a[i]==s){
            printf("ELEMENT FOUND AT INDEX: %d\n", i+1);
            f=1;
            break;
        }
    }
    if(f==0)
    printf("ELEMENT NOT PRESENT\n");
    return 0;
}