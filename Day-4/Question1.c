//Generate Fibonacci series.
#include<stdio.h>
int main(){
    int i,a,b,s=0;
    a=0;
    b=1;
    printf("%d %d",a,b);
    for(i=3;i<=10;i++){
        s=a+b;
        printf("%d",s);
        a=b;
        b=s;
    }
    printf("\n");
    
        return 0;
}
    
