#include<bits/stdc++.h>
using namespace std;


// 111 -> 7
// 1101 -> 13

int convert2Decimal(string n){
    int num = 0;
    int len = n.length();
    int power = 1;
    for(int i = len - 1; i >=0; i--){
        if(n[i] == '1'){
            num = num + power;
        }
        power = power * 2;
    }
    return num;
}

// TC - O(len) SC - O(1)

int main (){
    string n = "1101";
    cout << convert2Decimal(n);
}
