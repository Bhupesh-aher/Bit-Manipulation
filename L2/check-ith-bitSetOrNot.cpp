#include<bits/stdc++.h>
using namespace std;

// n = 13
//  1101
// i = 2

//  3   2   1   0
 // 1   1   0   1
 
// ith bit set or not means here i = 2
// and on index from right to left the 2nd index is 1 that means it is set  so return true

// if i = 1 

//  3   2   1   0
 // 1   1   0   1

 // in this case ith bit is 0 it means it is not set so return false



 // Brute approach
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


// optimal way is by using either left or right shift operator

void usingLeftShiftOperator(int n, int i){
    if((n & (1 << i)) != 0) cout << "true ith bit is set";
    else cout << "false ith bit is not set";
}
// TC - O(1) SC - O(1)

void usingRightShoftOperator(int n, int i){
    if(((n >> i) & 1) == 0) cout << "false ith bit is not set";
    else cout << "true ith bit is set";
}
// TC - O(1) SC - O(1)


int main (){
    int n  = 13;
    int ith = 2;

    // brute way 
    // string binary = convert2Binary(n);
    
    // for(int i = binary.length() -1; i>=0; i--){
    //     if(i == ith-1){
    //         cout << binary[i];
    //         break;
    //     }
    // }


    
    usingLeftShiftOperator(n, ith);
    cout << endl;
    usingRightShoftOperator(n, ith);


}
