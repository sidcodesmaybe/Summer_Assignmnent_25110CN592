/*Write a program to Frequency of an element.*/
#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
    int f;
    printf("ENTER ELEMENT TO CHECK");
    scanf("%d",&f);
    for(i=0;i<n;i++){
        if(f==a[i]){
            c++;
        }
    }
    printf("FREQUENCY OF NUMBER %d is: %d",f,c);
    return 0;
}