#include <stdio.h>

int main()
{
    int n, x, count;

    while (true)
    {
        scanf("%d %d", &n, &x);
        int A[n];
        count = 0;
        if (n == 0 && x == 0)
            break;
        for (int i = 0; i < n; i++)
            A[i] = i + 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (A[i] + A[j] + A[k] == x)
                        count += 1;
                }
            }
        }
        printf("%d\n", count);
    }
}