#include <stdio.h>

void swap(int *a, int *b) {
    int c;
    if(*a >= *b){
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main() {
    int n = 10;
    int numbers[10];
    int i;
    
    // �������������
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            swap(&numbers[j+1], &numbers[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if(i != n - 1) printf(" ");
    }
    


    return 0;
}
