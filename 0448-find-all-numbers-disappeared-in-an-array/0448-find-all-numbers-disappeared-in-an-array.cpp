class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            if(nums[i] != nums[nums[i] - 1])  
                // swap(i, nums[i] - 1);
            swap(nums[i], nums[nums[i] - 1]); 
            else    i++;
        }
        vector<int> res;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != i+1)  res.push_back(i+1);
        }
        return res;
    }
};