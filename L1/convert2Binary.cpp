#include<bits/stdc++.h>
using namespace std;


// 7  -> 111
// 13 -> 1101

string convert2Binary(int n){
    string res = "";
    while(n != 0){
        if(n % 2 == 1) res += "1";
        else res += "0";
        n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

// TC - O(log 2 n) SC - O(log 2 n)

int main (){
    int n = 7;
    cout << convert2Binary(n);

    
}