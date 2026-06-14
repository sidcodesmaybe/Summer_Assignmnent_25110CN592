//Intersection of arrays
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
    int inter[x];    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(a[i]==b[j]){
                inter[c] = a[i];
                c++;
                break;
                }
            }
        }
        if(c > 0){
        printf("\nINTERSECTION ARRAY:\n");
        for(i=0; i<c; i++){ 
            printf("%d ", inter[i]);
        }
        printf("\n");
    }
    else {
        printf("NO ELEMENTS COMMON\n");
    }
    
    return 0;
    }
