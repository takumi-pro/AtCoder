#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A(3);
    int cost=0;
    cin >> A[0] >> A[1] >> A[2];
    sort(A.begin(), A.end());
    cost += A[1]-A[0];
    cost += A[2]-A[1];
    cout << cost << endl;
}