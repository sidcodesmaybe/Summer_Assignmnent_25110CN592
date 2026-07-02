//Write a program to Create number guessing 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int target,n;
    srand(time(NULL));
    
    
    target = (rand() % 100) + 1;
    printf("=== NUMBER GUESSING GAME ===\n");
    printf("I have picked a number between 1 and 100.\n\n");
    
   
    printf("Guess a number: ");
    scanf("%d", &n);
    

    while (n != target) {
        if (n < target) {
            printf("Your guess is TOO LOW!\n");
        } else {
            printf("Your guess is TOO HIGH!\n");
        }

        printf("Try again. Enter a new guess: ");
        scanf("%d", &n);
    }

    printf("\n🎉 Match Found! You Win!\n");
    
    return 0;
}


 
