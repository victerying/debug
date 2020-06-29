#include <stdio.h>
#include <string.h>
int main() {
    int i,k;
    char n[10][21],m[21];
    for(i=0;i<10;i++)
        scanf("%s",n[i]);
    for(i=0;i<10;i++){
        for(k=9;k>i+1;k--) {
            if(strcmp(n[k],n[k-1])<0) {
                strcpy(m,n[k]);
                strcpy(n[k],n[k-1]);
                strcpy(n[k-1],m);
            }
        }
    printf("%s\n",n[i]); 
    }
    return 0;
}
