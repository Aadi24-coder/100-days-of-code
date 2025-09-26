#include <stdio.h>
int main()
{
    int sum[100][100];
    int a[100][100];
    int b[100][100];
    int c;
    int p ,q ,m,n; // rows and coloumns for 2 matrices 
    printf(" enter row and coloum for first matrix (p,q)");
    scanf("%d %d",&p,&q);
    printf(" enter row and coloum for first matrix (m,n)");
    scanf("%d %d",&m,&n);
    for(int i =0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i =0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i =0;i<p;i++)
    {
        for(int j =0;j<q;j++)
        {
            printf("%d",sum[i][j]);
              if (j == c - 1) {
        printf("\n\n");
        }
    }
    return 0;
}
}