#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int A[3];
    int maxim = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        if (maxim < A[i])
        {
            maxim = max(maxim, A[i]);
        }
    }
    printf("%d\n", maxim);
}