#include <stdio.h>

int main()
{
    int H, W;
    for (int t = 0;; t++)
    {
        scanf("%d %d", &H, &W);
        if (H == 0 && W == 0)
            break;
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (j % 2 == 0 && i % 2 == 0)
                {
                    printf("%s", "#");
                }
                else if (i % 2 != 0 && j % 2 != 0)
                {
                    printf("%s", "#");
                }
                else
                {
                    printf("%s", ".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}