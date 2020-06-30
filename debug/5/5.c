#include <stdio.h>
#include <string.h>
void swap (char *b, char *c);
int main() 
{
    char name[10][21];
    int i;
    int j;
    int m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m-j-1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
                swap(name[i], name[i + 1]);    
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s", name[i]);
        if (i != 9) {
            printf("\n");
        }    
    }
    return 0;
}


void swap (char *b, char *c) {
    char temp;
    int i;
    for(i = 0; i < 21; i++) {
	temp=b[i];
	b[i]=c[i];
	c[i]=temp;
    }
}
