#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,one,sum=0;
    cin >> N;
    int NM = N;
    while(NM>0){
        one = NM%10;
        NM = (NM-one)/10;
        sum+=one;
    }
    if(N%sum==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}