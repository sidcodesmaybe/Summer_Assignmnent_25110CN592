//Find LCM of two numbers.
#include<stdio.h>
int main(){
    int a,b,rem,lcm,t1,t2,pro=1;
    printf("Enter A");
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);
    t1=a;
    t2=b;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    pro=t1*t2;
    lcm=((pro)/a);
    printf("THE LCM of two number A&B is:%d",lcm);
    return 0;
}