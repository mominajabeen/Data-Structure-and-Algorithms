class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        int sumSubarray = 0;
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            res.push_back(nums[i]);
            sumSubarray += nums[i];
            if(sumSubarray > (sum-sumSubarray)) return res;
        }
        return res;
    }
};