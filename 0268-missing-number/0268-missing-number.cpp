class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int start = 0;
        while(start < nums.size()){
            if(nums[start] == start or nums[start] > nums.size()-1) start++;
            else    swap(nums[start], nums[nums[start]]);
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != i)    return i;
        }
        return nums.size();
    }
};