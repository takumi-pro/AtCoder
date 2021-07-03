#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n][m];
    int B[m];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += A[i][j] * B[j];
        }
        printf("%d\n", sum);
        sum = 0;
    }
}