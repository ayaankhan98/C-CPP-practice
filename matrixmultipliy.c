#include <stdio.h>

int main()
{
    int m,n,p,i,j;
    printf("Enter rows and column of first matrix : ");
    scanf("%d%d",&m,&n);
    printf("\nWARNING !! rows for matrix 2 are fixed\n\nEnter column for matrix 2 : ");
    scanf("%d",&p);

    int mat1[m][n],mat2[n][p],mat3[m][p];

    printf("\n\nEnter Matrix 1\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat1[i][j]);

    printf("\n\nEnter Matrix 2\n");
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            scanf("%d",&mat2[i][j]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat3[i][j]=0;
            for(int k=0;k<p;k++)
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
    printf("\nMULTIPLICATION\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
            printf("%d  ",mat3[i][j]);
        printf("\n");
    }
    return 0;
}
