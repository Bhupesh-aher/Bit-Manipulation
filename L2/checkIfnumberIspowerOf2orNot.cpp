#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if( n > 0 && (n & n-1) == 0) return true;
    return false;
}

int main(){
    int n = 16;
    if(isPowerOfTwo(n) == true) cout << n << " is power of 2";
    else cout << n << " is not power of 2";
}