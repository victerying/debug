#include <stdio.h>
#include <string.h>
int main() {
    int i,j;
    char name[10][21];
    for(i = 0,j = 0; i < 10; i++){
        scanf("%s",name[i]);
    }
    
    for(j = 0; j < 9; j++){
        for(i = 0; i < 9 - j; i++){
            if(strcmp(name[i],name[i+1]) > 0){
                char temp[21];
                strcpy(temp,name[i]);
                strcpy(name[i],name[i+1]);
                strcpy(name[i+1],temp);
            }
        }    
    }
    for(i = 0,j = 0; i < 10; i++){
        printf("%s\n",&name[i][j]);
    }
    
    return 0;
}
