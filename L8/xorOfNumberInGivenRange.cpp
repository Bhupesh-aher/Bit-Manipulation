#include<bits/stdc++.h>
using namespace std;

// n = 4
// 1 ^ 2 ^ 3 ^ 4 = 4
// ans is 4

// int xorNumber(int n){
//     int ans = 0;
//     for(int i = 1; i<=n; i++) ans = ans ^ i;
//     return ans;
// }
// TC - O(N) SC - O(1)



int xorNumber(int n){
    if(n % 4 == 1) return 1;
    else if(n % 4 == 2) return n + 1;
    else if(n % 4 == 3) return 0;
    else return n; // (n % 4 == 0)
}

// TC - O(1) SC - O(1)




// Now follow up problem can be to find xor from L to R
// will be given L and R find XOR from L to R
// L = 4 R = 7
// 4 ^ 5 ^ 6 ^ 7 = 0
// ans is 0

// int xorNumberFromLToR(int L, int R){
//     int ans = 0;
//     for(int i = L; i<=R; i++) ans = ans ^ i;
//     return ans;
// }

// TC - O(R - L + 1) SC - O(1)



// to optimize the follow up problem use the prevoius function which gives XOR from 1 to N in O(1) TC

int xorNumberFromLToR(int L, int R){
    int xorTillL = xorNumber(L-1);
    int xorTillR = xorNumber(R);

    return xorTillL ^ xorTillR;
}

// TC - O(1) SC - O(1)

int main(){
    int n = 4;
    // cout << xorNumber(n);

    int L = 4, R = 7;
    cout << xorNumberFromLToR(L, R);


}