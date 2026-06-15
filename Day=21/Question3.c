//Write a program to Count vowels and consonants.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER STRING:");
    scanf("%s",s);
    int l=strlen(s);
    int i,v=0,c=0;
    for(i=0;i<l;i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='o'){
            v++;
        }
        else 
        c++;
    }
    printf("NUMBER OF VOWELS:%d\n",v);
    printf("NUMBER OF CONSONANTS:%d",c);
    return 0;
}