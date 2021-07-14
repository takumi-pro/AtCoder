#include <bits/stdc++.h>
using namespace std;

int main(){
    int D,N;
    cin >> D >> N;
    vector<int> vec(110);
    for(int i=0; i<110;i++){
        vec[i] = i*100;
    }

    if(N==100) N++;

    if(D==0){
        cout << N << endl;
    }else if(D==1){
        cout << vec[N] << endl;
    }else if(D==2){
        cout << vec[N]*100 << endl;
    }
}