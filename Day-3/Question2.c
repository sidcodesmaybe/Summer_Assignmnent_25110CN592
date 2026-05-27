//Write a program to Print prime numbers in a range.
#include<stdio.h>
int main(){
    int n,i,j,flag;
    for(i=2;i<=10;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
            flag++;
            break;
            }
    }

        if(flag==0)
        printf("\t%d",i);
}
return 0;
}
