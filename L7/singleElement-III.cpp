#include<bits/stdc++.h>
using namespace std;

// [2, 4, 2, 6, 3, 7, 7, 3]
// ans [4, 6]

vector<int> singleNumber(vector<int>& nums) {
    map<int, int> mpp;
    for(int i = 0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }
    vector<int> ans;
    for(auto it: mpp){
        if(it.second == 1) ans.push_back(it.first);
    }
    return ans;
}
// TC - O(n * log m) + O(m)
// SC - O(m)
// where m is n/2+1


vector<int> singleNumber(vector<int>& nums) {
    long xorr = 0;      //Taking xorr as long for the case of INT_MIN in nums[i]

    for(auto &it : nums)
        xorr ^= it;
    
    int rightMostBitTurnedOne = xorr & (-xorr); 

    int b1 = 0, b2 = 0;     //b1 --> 1st bit is set   ||  b2 --> 1st bit is 0

    for(auto &it : nums) {

        if(it & rightMostBitTurnedOne)
            b1 ^= it;
        else
            b2 ^= it;
    }

    return {b1, b2};
}
// TC - O(2n) SC - O(1)

int main(){
    vector<int>nums = {2, 4, 2, 6, 3, 7, 7, 3};
    vector<int> ans = singleNumber(nums);

    for(auto it: ans) cout << it << " ";
}