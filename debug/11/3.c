#include <stdio.h>
#include <string.h>
int main() {
    int arr[32] = {0};
    char n;    
    int i=1;
    int c;
    while(scanf("%c",&n) != EOF) {
        if(n == '\n'){
            break;
        }
        c = (int)n;
        arr[i % 32] += c;
        i++;
       
    }
    int bits[32];
    int j;
    for(j = 0; j < 32; j++) {
        c = arr[31 - j]^(arr[j] << 1);
        bits[j] = c;
    }
    for(j = 0; j < 32; j++) {
        c = bits[j] % 85 + 34; 
        printf("%c", (char)c);
    }
    
    return 0;
}
