//Print armstrong numbers in range.
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,d,t,c=0,s=0;
    for(i=1;i<=1000;i++){
        t=i;
        c=0;
        s=0;
        while(t>0){
            
            t/=10;
            c++;
        }
        t=i;
        while(t>0){
        
            d=t%10;
            s=s+round(pow(d,c));
            t/=10;
        }
    
        if(i==s)
        printf(" %d", s);
    }
    return 0;
}