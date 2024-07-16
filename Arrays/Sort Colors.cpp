# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0, k = 0, j = n - 1;
        while (k <= j) {
            if (nums[k] == 2) {
                swap(nums[k], nums[j]);
                j--;
            } else if (nums[k] == 0) {
                swap(nums[i], nums[k]);
                i++;
                k++;
            } else {
                k++;
            }
        }

        return;
    }
};