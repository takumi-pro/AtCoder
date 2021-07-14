#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    int L[110] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int sum = L[i] + L[j] + L[k];
                int maxin = max({L[i], L[j], L[k]});
                int minim = min({L[i], L[j], L[k]});
                int midium = sum - (minim + maxin);
                if (L[i] != L[j] && L[j] != L[k] && L[i] != L[k] && (maxin - midium) < minim)
                {
                    ++count;
                }
            }
        }
    }
    cout << count << endl;
}