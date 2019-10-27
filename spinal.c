#include<stdio.h>

int main()
{
    int n, m, i, j;
    printf("Input Size of Matrix\n");
    scanf("%d %d",&n ,&m);
    int matrix[n][m];
    printf("Input Your Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",matrix[i][j]);
            }
        }
        else
        {
            for(j=m-1;j>=0;j--)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}