#include <stdio.h>
int matrix[100][100];
int m;
int n;
void f (int i)
{
    int j;
    if(i!=0)
        printf(" ");
    if(2*i==m-1)
    {
        for(j=0;j<n-2*i;j++)
        {
            printf("%d",matrix[i][i+j]);
            if(j!=n-2*i-1)
                printf(" ");
        }
    }
    else if(2*i==n-1)
    {
        for(j=0;j<m-2*i;j++)
        {
            printf("%d",matrix[i+j][i]);
            if(j!=m-2*i-1)
                printf(" ");
        }
    }
    else
    {
        printf("%d",matrix[i][i]);
        for(j=1;j<n-2*i;j++)
        {
            printf(" %d",matrix[i][i+j]);
        }
        for(j=1;j<m-2*i;j++)
        {
            printf(" %d",matrix[i+j][n-1-i]);
        }
        for(j=1;j<n-2*i;j++)
        {
            printf(" %d",matrix[m-1-i][n-1-i-j]);
        }
        for(j=1;j<m-2*i-1;j++)
        {
            printf(" %d",matrix[m-1-i-j][i]);
        }
    }
}
int main() {
    scanf("%d %d",&m,&n);
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    if(m<n)
    for(i=0;i<=(m-1)/2;i++)
    {
        f(i);
    }
    else
    for(i=0;i<=(n-1)/2;i++)
    {
        f(i);
    }   
    return 0;
}
