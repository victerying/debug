#include <stdio.h>

int main() {
    int matrix[100][100];
    int m;
    int n;

    int k = 0;
    int l = 0;
    int num = 1;
    scanf("%d %d", &m, &n);
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

      
    while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (int i = l; i < n; i++){
            if(num < m * n){
                printf("%d ", matrix[k][i]);
                num++;
            }else
                printf("%d ", matrix[k][i]);
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (int i = k; i < m; i++){
            if(num < m * n){
                printf("%d ", matrix[i][n - 1]);
                num++;
            }else
                printf("%d ", matrix[i][n - 1]);
 
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m){
            for (int i = n - 1; i >= l; i--)
            {
             if(num < m * n){
                printf("%d ", matrix[m - 1][i]);
                num++;
            }else
                printf("%d ", matrix[m - 1][i]);
 
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n){
            for (int i = m - 1; i >= k; i--)
            {
                if(num < m * n){
                    printf("%d ", matrix[i][l]);
                    num++;
                }else
                    printf("%d ", matrix[i][l]);
     
            }
            l++;    
        }        
    }
    return 0;
}
