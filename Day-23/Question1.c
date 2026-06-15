//Write a program to Find first non-repeating character.
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("ENTER THE STRNG");
    scanf("%s",s);
    int i,j,flag;
    int end=strlen(s);
    for(i=0;i<end;i++){
        flag=0;
        for(j=0;j<end;j++){
            if(s[i]==s[j]&&i!=j){
                flag=1;
                break;
            }
        }
         if (flag==0){
     printf("%c",s[i]);   
     return 0;
    }
    }
   printf("NO ELEMENTs");
   return 0;
}
