//Write a program to Convert lowercase to uppercase.    char s[100];
    printf("ENTER STRING:");
    scanf("%s",s);
    int l=strlen(s);
    int i,v=0,c=0;
    for(i=0;i<l;i++){
        if(s[i]>'A'&&s[i]<'Z'){
            s[i]+=32;
        }
    }
    printf("NEW STRING:%s",s);
    return 0;
}