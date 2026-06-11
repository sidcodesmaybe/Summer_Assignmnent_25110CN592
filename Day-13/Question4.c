/*Write a program to Count even and odd
elements.
*/
#include<stdio.h>
int main(){
    int n,i,even=0,odd=0;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER ELEMENT");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else
        odd++;
    }
    printf("NUMBER OF EVEN NUMBERS IS %d",even);
     printf("NUMBER OF ODD NUMBERS IS %d",odd);
     return 0;
}