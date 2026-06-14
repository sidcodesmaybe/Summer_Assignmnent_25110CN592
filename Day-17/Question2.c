//union of arrays
#include<stdio.h>
int main(){
    int n,i,j,total,k;
    printf("ENTER N");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("ENTER THE ElEMENT ");
        scanf("%d",&a[i]);
    }
    printf("ENTER J");
    scanf("%d",&j);
    int b[j];
    for(i=0;i<j;i++){
        printf("ENTER THE ELEMNET ");
        scanf("%d",b[i]);
    }
    int c[j+n];
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<j;i++){
        c[i+n]=b[i];
    }
    total=n+j;
    for(i=0; i<total; i++){
        for(j=i+1; j<total; j++){
            if(c[i] == c[j]){
                for(k=j; k<total-1; k++){
                    c[k] = c[k+1];
                }
                total--; 
                j--;     // Step back to check shifted element
            }
        }
    }
    
    // Step 3: Print array c up to its new total size
    printf("UNION ARRAY:\n");
    for(i=0; i<total; i++){
        printf(" %d", c[i]);
    }
    printf("\n");
    
    return 0;
}