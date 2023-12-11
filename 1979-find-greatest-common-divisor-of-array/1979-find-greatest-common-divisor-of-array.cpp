class Solution {
public:
    int findGCD(vector<int>& nums) {
       int maxVal = 0;
        int minVal = 1001;
        for(int i = 0; i<nums.size(); i++){
            maxVal = max(maxVal, nums[i]);
            minVal = min(minVal, nums[i]);
        }
        int res = minVal;
        if(maxVal % res == 0)   return res;
        for(int i = minVal; i>=1; i--){
            if(minVal % i == 0 && maxVal % i == 0)    return i;
        }
        return 1;
    }
};