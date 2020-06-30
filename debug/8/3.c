#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d\n", &n);
    size_t max = 0;
    size_t current;
    char maxName[200];
    char name[200];
    int j; 
    for (int i = 0; i < n; ++i) {
        for(j = 0; j < 101; j++) {
            scanf("%c",&name[j]);
            if(name[j] == '\n') {
                name[j] = 0;
                break;
            }
        }

        current = strlen(name);
        if (current > max) {
           max = current;
           strcpy(maxName, name);
        }
    }
    printf("%s\n",maxName);
    return 0;
}
