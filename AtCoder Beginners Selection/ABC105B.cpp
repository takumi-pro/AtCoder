#include <bits/stdc++.h>
using namespace std;

string resolve(int num) {
    for (int i=0; i < 101; i++) {
        for (int j=0; j < 101; j++) {
            if (i*4+i*7 == num) return "Yes";
        }
    }
    return "No";
}

int main(){
    int N, newN;
    bool buyFlg=false;
    cin >> N;
    cout << resolve(N) << endl;

    // if (N%4==0 || N%7==0) buyFlg=true;
    // if (!buyFlg) {
    //     if (N > 10) {
    //         for (int i=0; i<(N/7); i++) {
    //             N = N % 7;
    //         }
    //         for (int i=0; i<(N/4); i++){
    //             N = N % 4;
    //         }
    //     }
    //     if (N==0) {
    //         buyFlg=true;
    //     }
    // }
    // if (buyFlg) {
    //     cout << "Yes" << endl;
    // }else {
    //     cout << "No" << endl;
    // }
}