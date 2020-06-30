#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101];
    int i;
    int j;
    for (i = 0; i < n; i++) {
        for(j = 0; j < 101; j++) {
	    scanf("%c",&names[i][j]);
	    if(names[i][j] == '\n') {
		names[i][j] = 0;
		break;
	    }
	}
    }

    for (i = 0; i < n; i++) {
        if(strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
    }

    printf("%s", max);
    return 0;
}
