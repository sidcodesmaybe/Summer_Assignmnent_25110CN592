//Write a program to Character frequency.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER THE STRING:");
    gets(s);
    int end=strlen(s);
    int i,j,c;
    for(i=0;i<end;i++){
        int alreadyCounted = 0;
        for(j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                alreadyCounted = 1;
                break;
            }
        }
        if(alreadyCounted == 1) {
            continue; // Skips to the next character in the loop
        }
        c=0;
        for(j=0;j<end;j++){
            if(s[i]==s[j]){
               c++;
            }
        }
        printf("%c: %d\n", s[i], c);
    }
    return 0;
}