#include <bits/stdc++.h>
using namespace std;

string judge(string str){
    char c0 = str[0];
    char c2 = str[1];
    string last = str.substr(str.size()-1, 1);
    int count=0,upperCount=0;
    string ind = str.substr(2, str.size()-3);
    for(int i=0; i < (int)ind.size(); i++){
        if(ind[i] == 'C' && isupper(ind[i])){
            ++count;
        }else if(isupper(ind[i])){
            ++upperCount;
        }
    }
    if(upperCount == 0 && count == 1 && isupper(c0) && islower(c2) && islower(last[0]) && c0 == 'A'){
        return "AC";
    }else{
        return "WA";
    }
}

int main(){
    string S;
    cin >> S;
    cout << judge(S) << endl;
}