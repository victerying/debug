#include <stdio.h>

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int inter;
    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 9; i++){
        for(m = n - 1; m > i; m--){
            if(numbers[m] > numbers[m-1]){
                inter = numbers[m];
                numbers[m] = numbers[m-1];
                numbers[m-1] = inter;
            }
        }
    }
    
    for(i = 0; i <= 9; i++){
        printf("%d", numbers[i]);
        if(i != 9){
            printf(" ");
        }
    }

    return 0;
}
