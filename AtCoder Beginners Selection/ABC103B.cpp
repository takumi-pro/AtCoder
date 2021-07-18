#include <bits/stdc++.h>
using namespace std;

string strReverse(string str, string T){
    for(int i=0; i<str.size(); i++){
        if(str==T) return "Yes";
        string last = str.substr(str.size()-1, 1);
        str = last+str.substr(0, str.size()-1);
    }
    return "No";
}

int main(){
    string S,T;
    cin >> S >> T;
    cout << strReverse(S, T) << endl;
}