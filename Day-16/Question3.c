//FInd pair with given sum
#include<stdio.h>
int main(){
    int g,n,i,j,f,s=0;
    printf("GIVEN SUM:");
    scanf("%d",&g);
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ELEMENT");
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        s=a[i]+a[j];
    if(s==g){
       printf(" (%d,%d)\n ",a[i],a[j]);
        f=1;
    }
    
}

}
if(f==0){
     printf("NO PAIRS");
}
return 0;
}