#include <stdio.h>

int main()
{
    int m, f, r;

    for (int i = 0;; i++)
    {
        scanf("%d %d %d", &m, &f, &r);
        int sum = m + f;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }
        if (m == -1 || f == -1)
        {
            printf("%c\n", 'F');
        }
        else if (sum >= 80)
        {
            printf("%c\n", 'A');
        }
        else if (sum >= 65 && sum < 80)
        {
            printf("%c\n", 'B');
        }
        else if (sum >= 50 && sum < 65)
        {
            printf("%c\n", 'C');
        }
        else if (sum >= 30 && sum < 50 && r >= 50)
        {
            printf("%c\n", 'C');
        }
        else if (sum >= 30 && sum < 50)
        {
            printf("%c\n", 'D');
        }
        else if (m == -1 || f == -1 || sum < 30)
        {
            printf("%c\n", 'F');
        }
        else if (sum < 30)
        {
            printf("%c\n", 'F');
        }
    }
}