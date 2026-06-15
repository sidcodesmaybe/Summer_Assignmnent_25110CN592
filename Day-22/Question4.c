//Write a program to Remove spaces from string.
#include<stdio.h>
#include<string.h>
int main(){
    int start=0;
    char s[100];
    printf("ENTER STRING ");
    gets(s);
    int end=strlen(s);
    int i,j,space=0;
    for(i=0;i<end;i++){
        if(s[i]!=' '){
           s[j]=s[i];
           j++;
        }
    }
    s[j]='\0';
    printf("%s\n",s);
    return 0;
}
