#include<bits/stdc++.h>
using namespace std;

// [ 4, 1, 2, 1, 2 ]
// 4 is appearing one time and all other elements are appearing twice
// ans is 4

// we already have solved this problem in Array.
// so we have discusse the brute, better approach over there.


// here we will try solve using bit wise operators

// we know if we do XOR of 2 same no it results out to be 0
// if we do XOR of every element. order doesn't matter while doing XOR. so we will get the single element in array

// 4 ^ 1 ^ 2 ^ 1 ^ 2 
// 4 ^ 1 ^ 1  2 ^ 2 
// 4 ^ 0 ^ 0
// 4

int main(){
    vector<int>nums = {4, 1, 2, 1, 2};

    int XOR = 0;
    for(int i = 0; i<nums.size(); i++){
        XOR = XOR ^ nums[i];
    }
    cout << XOR;
    
}

// TC - O(N)  SC - O(1)
