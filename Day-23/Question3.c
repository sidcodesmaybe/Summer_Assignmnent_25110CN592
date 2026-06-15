//Write a program to Check anagram strings.
#include<stdio.h>
#include<string.h>
void sort( char s[],int l){
    int i,j;
    char t;
    for(i=0;i<l-1;i++){
        for(j=i+1;j<l;j++){
                if(s[i]>s[j]){
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
                }
        }
    }
}
int main(){
    char s1[100],s2[100];
    printf("ENTER FIRST STRING: ");
    scanf("%s", s1);
    printf("ENTER SECOND STRING: ");
    scanf("%s", s2);
    
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    sort(s1,len1);
    sort(s2,len2);
    if(strcmp(s1,s2)==0&&len1==len2){
        printf("ANANGRAMS");
    }
    else
    printf("NOT ");
    return 0;
}