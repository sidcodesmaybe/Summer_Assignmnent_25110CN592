//WAP FOR SELECTION SORT.
#include<stdio.h>
int main(){
    int n,t,i,j;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT ");
        scanf("%d",&a[i]);
    }
    //LOGIC FOR SELECTION SORT
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
            if(min!=i){
               t = a[i];
            a[i] = a[min];
            a[min] = t;
            }
        }
    for(i=0;i<n;i++)
        printf(" %d",a[i]);
    return 0;
    }
