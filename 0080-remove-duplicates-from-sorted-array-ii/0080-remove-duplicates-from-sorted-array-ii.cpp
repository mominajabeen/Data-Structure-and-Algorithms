class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(auto ele:nums){
            if(i == 0 or i == 1 or nums[i-2] != ele){
                nums[i] = ele;
                i++;
            }
        }
        return i;
    }
};