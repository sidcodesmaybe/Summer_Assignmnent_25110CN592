//Write a program to Create ATM simulation.
#include<stdio.h>
int main(){
    int rem,n,attempts=3,pini,balance=1500,pin=1234;
    printf("enter pin");
    scanf("%d",&pini);
    while(attempts!=0){
        if(pin==pini){
            break;
        } 
        else
        printf("Enter pin again");
        scanf("%d",&pini);
        attempts--;
    }
    if(attempts==0){
        printf("Attempts run out!! Card Blocked");
    }
    if(pin==pini){
        printf("Welcome to ATM MENU\n");
        printf("Enter 1 to withdraw money\n");
        printf("Enter 2 to deposit money\n");
        printf("Enter 3 to check balance\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            {
                int a;
                printf("Enter amount to withdraw");
                scanf("%d",&a);
               if (a <= 0) {
                printf("Invalid amount!\n");
                    }
                    else if(a>balance){
                        printf("Not enough balance\n");
                    }
                else
                balance-=a;
                printf("Remaining balance:%d\n",balance);
                break;
            }
            case 2:
            {
                int b;
                printf("Enter amount to deposit");
                scanf("%d",&b);
                balance+=b;
                printf("New Balance:%d\n",balance);
                break;
            }
            case 3:
            {
                printf("Available Balance:%d",balance);
            }
        }
    }
    return 0;
}
