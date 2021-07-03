#include <stdio.h>

int main()
{
    int a[2], tmp;
    for (int i = 0;; i++)
    {
        scanf("%d %d", &a[0], &a[1]);
        if (a[0] == 0 && a[1] == 0)
            break;
        if (a[0] > a[1])
        {
            tmp = a[0];
            a[0] = a[1];
            a[1] = tmp;
        }
        printf("%d %d\n", a[0], a[1]);
    }
}