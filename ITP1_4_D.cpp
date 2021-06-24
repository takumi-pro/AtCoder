#include <stdio.h>

int main()
{
    int n, l;
    int sum = 0;
    int a[n];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l);
        sum += l;
        a[i] = l;
    }
    printf("%d\n", sum);
}