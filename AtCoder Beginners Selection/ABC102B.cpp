#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int maxim,minim,abs;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(), A.end());
    minim = A[0];
    sort(A.begin(), A.end(), greater<int>());
    maxim = A[0];
    abs = maxim-minim;
    cout << abs << endl;
}