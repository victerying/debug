#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-i;j>=1;j--){
            printf("%d",j);
            if(j!=1)
                printf(" ");
        }
        printf("\n");
    }
        
    return 0;
}
