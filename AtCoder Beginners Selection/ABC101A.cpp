#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int num=0;
    cin >> S;
    (S[0]=='+') ? ++num : --num;
    (S[1]=='+') ? ++num : --num;
    (S[2]=='+') ? ++num : --num;
    (S[3]=='+') ? ++num : --num;
    cout << num << endl;
}