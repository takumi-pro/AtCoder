#include <stdio.h>

int main()
{
    int b, f, r, v;
    int n;
    scanf("%d", &n);
    int B[n], F[n], R[n], V[n];
    int house[4][3][10];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                house[i][j][k] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &b, &f, &r, &v);
        house[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf(" %d", house[i][j][k]);
            }
            printf("\n");
        }
        if (i != 3)
            printf("####################\n");
    }
}