#include<bits/stdc++.h>
using namespace std;

// [5, 5, 5, 2, 4, 4, 4]
// every number appears thrice in the array. except one number that only one time that number we need to return
// in this case 5 and 4 appearing thrice where as 2 is appearing only once
// ans is 2

// [2, 2, 1, 2, 1, 1, 4, 3, 4, 4] ans = 3

int singleNumber(vector<int>& nums) {
    map<int, int> mpp;
    for(int i = 0; i<nums.size(); i++){
        mpp[nums[i]] ++;
    }

    for(auto it: mpp){
        if(it.second == 1) return it.first;
    }
    return -1;
}
// TC - O(n * log m) + O(m)
// SC - O(m)
// where m is size of map and size is n/3 + 1




int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int bitIndex = 0; bitIndex <= 31; bitIndex++){
        int cnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if((nums[i] & (1 << bitIndex)) != 0){
                cnt ++;
            }
        }
        if(cnt % 3 == 1){
            ans = ans | (1 << bitIndex);
        }
    }
    return ans;
}

// TC - O(n * 32)  SC - O(1) 


int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 1; i<nums.size(); i = i+3){
        if(nums[i] != nums[i-1]) return nums[i-1];
    }
    return nums[n-1];
}

// TC - O(n/3) + O(n log n) SC - O(1)


int singleNumber(vector<int>& nums) {
    int ones = 0, twos = 0;
    for(int i = 0; i<nums.size(); i++){
        ones = (ones ^ nums[i]) & ~ twos;
        twos = (twos ^ nums[i]) & ~ ones;
    }
    return ones;
}

// TC - O(n) SC - O(1)


int main(){
    vector<int>nums = {5, 5, 5, 2, 4, 4, 4};
    cout << singleNumber(nums);
    
    
}
