#include<bits/stdc++.h>
using namespace std;

// n = 13 i = 2
// 13 =  1 1 0 1

// after toggle   1 0 0 1 => 9

// n = 13 i = 1
// after toggle   1 1 1 1 => 15



// brute -
// step 1 - convert 13 to binary form
// step 2 - find ith bit. if the ith bit is 0 make it 1. else if it is 1 make it 0
// step 3 - covnert the binary into n. you will get new n


// optimal 

void toggleIthBit(int n, int i){
    
    cout << (n ^ (1 << i));
}


int main (){
    int n = 13;
    int ith = 1;

    toggleIthBit(n, ith);

}
