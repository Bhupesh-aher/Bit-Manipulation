#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1, 2, 3};
    int n = nums.size();
    vector<vector<int>> ans;
    int subSets = (1 << n);
    
    for(int num = 0; num <subSets; num++){
        vector<int> ds;
        for(int i = 0; i < n; i++){
            if((num & (1 << i)) != 0){
                ds.push_back(nums[i]);
            }
        }
        ans.push_back(ds);
    }
    
    for(auto it: ans){
        for(auto ele: it) cout << ele << " ";
        cout << endl;
    }
}

// TC - O(2^n * n) SC - O(2^n * n)