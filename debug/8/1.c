#include <stdio.h>
#include <string.h>
int main() 
{
    int n;
    scanf("%d\n", &n);
    char names[n][101];
    char max[101]={0};
    int z;
    for (int i = 0; i < n; i++) {
        //gets(names[i]);
        z = 0;
        while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
            z++;
        }
	names[i][z]=0;
        //printf("%s %ld,\n", names[i], strlen(names[i]));
    }
    for (int i = 0; i < n; i++) {
        if(strlen(names[i]) > strlen(max)) {
	    strcpy(max, names[i]);
	}
	//printf("%s %ld,\n", max, strlen(max));
    }
    
    printf("%s\n", max);
    return 0;
}
