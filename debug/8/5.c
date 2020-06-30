#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d\n", &n);    
    char input;
    char name[n][101];
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < 101; j++) {
            scanf("%c",&name[i][j]);
            if(name[i][j] == '\n') {
                name[i][j] = 0;
                break;
            }
        }
    }
    
    char name_max[100];
    
    strcpy(name_max, name[0]);

    for(int i = 1; i < n; i++) {
        if(strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }

    printf("%s", name_max);
    
    return 0;
}
