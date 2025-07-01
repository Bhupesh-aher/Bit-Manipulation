#include<bits/stdc++.h>
using namespace std;

// n = 9 i = 2
// 9 =  1001

// 3 2 1 0
// 1 0 0 1

// after setting ith bit 
// 3 2 1 0
// 1 1 0 1

// 1 1 0 1 is 13
// we will get 13



// brute -
// step 1 - convert 13 to binary form
// step 2 - clear step - set the ith bit to 0
// step 3 - covnert the binary into n. you will get new n


// optimal 

void clearIthBit(int n, int i){
    
    cout << (n & ~(1 << i));
}


int main (){
    int n = 13;
    int ith = 2;

    clearIthBit(n, ith);

}
