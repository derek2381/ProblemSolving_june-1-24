// problem link
// https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/description/


class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int max_val = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] % 2 == 0 && nums[i] <= threshold) {
                int count = 1;
                for(int j = i + 1; j < n; j++) {
                    if(nums[j] <= threshold && (nums[j - 1] % 2 != nums[j] % 2)) {
                        count++;
                    } else {
                        break;
                    }
                }
                if(count > max_val) {
                    max_val = count;
                }
            }
        }

        return max_val;
    }
};
