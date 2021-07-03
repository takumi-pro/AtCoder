#include <stdio.h>

int main()
{
    int n;
    int A[11000];
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    while (true)
    {
        bool flg = false;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 != 0)
                flg = true;
        }

        if (flg)
            break;

        for (int i = 0; i < n; i++)
        {
            A[i] /= 2;
        }
        count += 1;
    }
    printf("%d\n", count);
}