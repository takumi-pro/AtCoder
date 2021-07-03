#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, l;
    long sum = 0;
    int maxim = -1000001;
    int minim = 1000001;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l);
        sum += l;
        maxim = max(maxim, l);
        minim = min(minim, l);
    }
    printf("%d %d %ld\n", minim, maxim, sum);
}