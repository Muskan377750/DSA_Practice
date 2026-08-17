#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       for(int idx=0; idx<nums.size()-1; idx++){
            for(int j = idx+1; j<nums.size(); j++){
                if(nums[idx]==nums[j]) return true;
            }
       }
    return false;
    }
};