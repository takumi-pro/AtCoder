#include <bits/stdc++.h>
using namespace std;

int main(){
    int R;
    string S;
    cin >> R;
    if(R < 1200){
        S = "ABC";
    }else if(R >= 1200 && R < 2800){
        S = "ARC";
    }else if(R >= 2800){
        S = "AGC";
    }
    cout << S << endl;
}