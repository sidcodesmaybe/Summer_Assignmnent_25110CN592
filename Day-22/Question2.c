//count words in sentence
#include<stdio.h>
#include<string.h>
int main(){
    int start=0;
    char s[100];
    printf("ENTER STRING ");
    gets(s);
    int end=strlen(s);
    int w=0;
    for(start=0;start<end;start++){
        if(s[start]==' '){
            w++;
        }
    }
    printf("%d",w);
    return 0;
}
