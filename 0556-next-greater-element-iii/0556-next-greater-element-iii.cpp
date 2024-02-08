class Solution {
public:
    int nextGreaterElement(int n) {
        string nums = to_string(n);
        bool res = nextPermutation(nums);
        
        size_t ans = stoll(nums);
        return (!res or ans > INT_MAX)? -1:ans;
    }
    bool nextPermutation(string& nums){
        int i = nums.size()-1;
        while(i > 0 && nums[i-1] >= nums[i])    i--;
        if(i == 0)  return false;
        
        int j = nums.size()-1;
        while(j > 0 && nums[j] <= nums[i-1]) j--;
        
        swap(nums[j], nums[i-1]);
        sort(nums.begin()+i, nums.end());
        return true;
    }
};