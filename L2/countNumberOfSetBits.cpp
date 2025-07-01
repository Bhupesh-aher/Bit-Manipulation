#include<bits/stdc++.h>
using namespace std;

// n = 13  = 1 1 0 1 
// no of set bits are 3  ans = 3

// n = 16  1 0 0 0 0
// no of set bits are 1  ans = 1


// using brute way
// int convert2Binary(int n){
//     int cnt = 0;
//     while(n != 0){
//         if(n % 2 == 1) cnt++;
//         n = n / 2;
//     }
//     return cnt;
// }


// using bit way
// int convert2Binary(int n){
//     int cnt = 0;
//     while(n != 0){
//         cnt += n & 1;
//         n = n >> 1;
//     }
//     return cnt;
// }


// Both the code are same not that much difference - just bit way is slightly faster than brute way
// TC - O(log 2 n) for both the code



// another way using bit - this way is better than both of the above code
int convert2Binary(int n){
    int cnt = 0;
    while(n != 0){
        n = (n & n-1);
        cnt ++;
    }
    return cnt;
}

// TC - O(no of set bits) SC - O(1)

int main(){
    int n = 13;
    cout << convert2Binary(n);

}