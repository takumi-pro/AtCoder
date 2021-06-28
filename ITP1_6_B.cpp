#include <stdio.h>
using namespace std;

void output(int card[], char mark)
{
    for (int i = 0; i < 13; i++)
    {
        if (card[i] == 0)
        {
            printf("%c %d\n", mark, i + 1);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int rank[13];
    int cards[4][13];
    char mark[2];
    int S[13], H[13], C[13], D[13];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            cards[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%s %d", mark, &tmp);
        if (mark[0] == 'S')
            cards[0][tmp - 1] = 1;
        if (mark[0] == 'H')
            cards[1][tmp - 1] = 1;
        if (mark[0] == 'C')
            cards[2][tmp - 1] = 1;
        if (mark[0] == 'D')
            cards[3][tmp - 1] = 1;
    }
    for (int i = 0; i < 13; i++)
    {
        S[i] = cards[0][i];
        H[i] = cards[1][i];
        C[i] = cards[2][i];
        D[i] = cards[3][i];
    }
    output(S, 'S');
    output(H, 'H');
    output(C, 'C');
    output(D, 'D');
}