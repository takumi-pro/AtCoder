#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    int rsum, sum = 0;
    cin >> r >> c;

    int A[r + 1][c + 1];
    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            A[i][j] = 0;
        }
    }

    for (int i = 0; i < r; i++)
    {
        rsum = 0;
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
            rsum += A[i][j];
            A[r][j] += A[i][j];
        }
        A[i][c] = rsum;
        sum += rsum;
    }
    A[r][c] = sum;

    for (int i = 0; i < r + 1; i++)
    {
        for (int j = 0; j < c + 1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

// #include <stdio.h>

// using namespace std;

// int main()
// {
//     int r, c, sum, total_sum = 0;
//     scanf("%d %d", &r, &c);
//     int table[r + 1][c + 1];

//     for (int i = 0; i < r + 1; i++)
//     {
//         for (int j = 0; j < c + 1; j++)
//         {
//             table[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < r; i++)
//     {
//         sum = 0;
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &table[i][j]);
//             sum += table[i][j];
//             table[r][j] += table[i][j];
//         }
//         table[i][c] = sum;
//         total_sum += sum;
//     }
//     table[r][c] = total_sum;

//     for (int i = 0; i < r + 1; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", table[i][j]);
//         }
//         printf("%d\n", table[i][c]);
//     }
// }
