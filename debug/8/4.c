#include <stdio.h>
#include <string.h>
int main() 
{
    int n;
    scanf("%d\n", &n);
    char name[n][101];
    char temp[101];
    

    for(int i = 0; i < n; i++) {

	for(int j = 0; j < 101; j++) {
            scanf("%c",&name[i][j]);
            if(name[i][j] == '\n') {
                name[i][j] = 0;
                break;
            }
        }        
    }
 
    for (int j = 0; j < n; j++){
        for (int k = 0; k < n - j - 1; k++) {
            if((strlen(name[k]) < strlen(name[k + 1]))) {
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }
    printf("%s\n", name[0]);
    return 0;
}
