#include<bits/stdc++.h>
using namespace std;



int convert2Binary(int n){
    int cnt = 0;
    while(n != 0){
        n = (n & n-1);
        cnt ++;
    }
    return cnt;
}

// TC - O(log 2 start ^ goal) SC - O(1)

int main(){
    
    int start = 10;
    int goal = 7;
    int ans = start ^ goal;
    cout << convert2Binary(ans);
}