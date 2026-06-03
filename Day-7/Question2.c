//Write a program to Recursive factorial.
#include<stdio.h>
int fact(int);
int main(){
    int n,f, result;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        result = fact(n); // Call the recursive function here
        printf("Factorial of %d = %d\n", n, result);
    }
    
    return 0;
    }
int fact(int x){
    if(x==0||x==1)
    return 1;
    else
    return x*fact(x-1);
}
