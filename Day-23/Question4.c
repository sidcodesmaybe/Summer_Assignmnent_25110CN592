//Write a program to Find maximum occurring character
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char s[100];
    printf("ENTER THE STRING:");
    gets(s);
    int l=strlen(s);
    int mc=0;
    int c,t;
    char maxc;
    for(i=0;i<l;i++){
        c=0;
        for(j=0;j<l;j++){
                if(s[i]==s[j]){
                    c++;
                }
        }
        if(c>mc){
                    mc=c;
                   maxc=s[i];
                }
    }
    printf("Maximum occurring character is '%c' (appears %d times)\n", maxc, mc);
    return 0;
}