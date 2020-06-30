#include <stdio.h>
int main() {
    int matrix[100][100];
    int m;
    int n;
    int i;
    int j;
    int startX;
    int startY;
    int endX;
    int endY;
    int count = 0;   
    startX = 0;
    startY = 0;
   
    scanf("%d %d", &m, &n);
    endX = m;
    endY = n;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    if(m == 1 && n == 1) {
        printf("%d",matrix[0][0]);
        return 0;
    }
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
                if(count < m * n){
                    printf("%d ", matrix[startX][j]);
                    count++;
                }else
                    printf("%d", matrix[startX][j]);
           }
        }  
        if (startX < endX) {
            for (j = startX + 1; j <= endX; j++) {
                if(count < m * n){
                    printf("%d ", matrix[j][endY]);
                    count++;
                }else
                    printf("%d", matrix[j][endY]);
           }
        }
        if (endX > startX && startY < endY) {
            for (j = endY - 1; j >= startY; j--){
                if(count < m * n){
                    printf("%d ", matrix[endX][j]);
                    count++;
                }else
                    printf("%d", matrix[endX][j]);
            }
        }
        if (endX - 1 > startX && startY < endY) {
            for (i = endX - 1; i >= startX + 1; i--){
                if(count < m * n){
                    printf("%d ", matrix[i][startX]);
                    count++;
                }else
                    printf("%d", matrix[i][startX]);
            }
        }
        startX++;
        startY++;
    }    
    return 0;
}
