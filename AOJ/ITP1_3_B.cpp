#include <stdio.h>
// #include <iostream>
using namespace std;

// int main()
// {
//     int a[10000], l;
//     int i = 1;
//     scanf("%d\n", &a);
//     for (int i = 0; i < 10000; i++)
//     {
//         printf("Case %d: %d\n", i, a[i]);
//     }
// }

//============solution_01==========
int main()
{
    int x;
    int i = 0;
    // for (int i = 1;; i++)
    // {
    //     scanf("%d", &x);
    //     if (x == 0)
    //         break;
    //     printf("Case %d: %d\n", i, x);
    // }
    while (true)
    {
        scanf("%d", &x);
        if (x == 0)
            break;
        printf("Case %d: %d\n", i, x);
        i++;
    }
}