//Recursive function for fiboncacci sequence
#include<stdio.h>
void fib(int);  
void fib(int n1){
   int i,s=0,n=1,p=0;
   printf("%d %d",p,n);
   for(i=3;i<=n1;i++){
    s=p+n;
    printf(" %d",s);
    p=n;
    n=s;
   }
}
int main(){
    int x,result;
printf("Enter value uptill which sequence is required");
scanf("%d", &x);
    fib(x);
    return 0;
}