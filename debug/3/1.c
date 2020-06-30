#include <stdio.h>
#include<math.h>


int main() {
    int matrix[100][100];
    int m;
    int n;
    int i,j;
    int x;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
	{
            printf("%d %d\n", i, j);
    	    scanf("%d", &matrix[i][j]);
	}
    }
    x=0;
    while(m-2*x>1 && n-2*x>1)
    {
	if(x!=0)
	printf(" ");
	printf("%d",matrix[x][x]);
	for(i=1;i<n-2*x;i++)
	{
	    printf(" %d",matrix[x][x+i]);
	}
	for(i=1;i<m-2*x;i++)
	{
	    printf(" %d",matrix[x+i][n-1-x]);  
	}
	for(i=1;i<n-2*x;i++)
	{	    printf(" %d",matrix[m-1-x][n-1-x-i]);
	}
	for(i=1;i<m-2*x-1;i++)
	{
       	    printf(" %d",matrix[m-1-x-i][x]);
	}
	x++;
    }
    if(m-2*x==1)
    {
	for(i=0;i<n-2*x;i++)
        {
            printf(" %d",matrix[x][x+i]);
        }
    }
    else if(n-2*x==1)
    {
	for(i=0;i<m-2*x;i++)
        {
            printf(" %d",matrix[x+i][x]);
        }
    }
    return 0;
}
