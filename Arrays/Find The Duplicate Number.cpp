# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

class Solution {
    int findDuplicate(vector<int>& nums) {
        int ans = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0 ; i < nums.size() ; i++) {
            if ((i + 1) < nums.size()) {
                if (nums[i] == nums[i + 1]) {
                    ans = nums[i];
                }
            }
        }

        return ans;
    }
};

