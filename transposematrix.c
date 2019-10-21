#include <stdio.h>

int main()
{
    int m,n,i,j;
    printf("Enter rows and column for matrix : ");
    scanf("%d%d",&m,&n);
    int mat[m][n],transmat[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    printf("Matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d  ",mat[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            transmat[i][j] = mat[j][i];
        }
    printf("\nTranspose :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d  ",transmat[i][j]);
        printf("\n");
    }

}
