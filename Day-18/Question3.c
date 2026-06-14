//BINARY SEARCH
#include<stdio.h>
int main(){
    int n,i,x,j,mid,f=0;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT:");
        scanf(" %d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO SEARCH");
    scanf("%d",&x);
    int min=a[0];
    int max=a[n-1];
    while(min<=max){
            mid=(min+max)/2;
            if(a[mid]==x){
                f=1;
                break;
            }
            if(a[mid]<x)
            min=mid+1;
            if(a[mid]>x) 
             max=mid-1;          
        }
if(f==1){
    printf("FOUND AT: %d",mid);
}
else
printf("NOT FOUND");
return 0;
    }
