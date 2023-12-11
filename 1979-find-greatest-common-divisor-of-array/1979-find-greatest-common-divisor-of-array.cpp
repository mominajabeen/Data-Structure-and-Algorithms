class Solution {
public:
    int findGCD(vector<int>& nums) {
       int maxVal = 0;
        int minVal = 1001;
        for(int i = 0; i<nums.size(); i++){
            maxVal = max(maxVal, nums[i]);
            minVal = min(minVal, nums[i]);
        }
        int res = 1;
        if(maxVal % minVal == 0)   return minVal;
        for(int i = 1; i<= sqrt(minVal); i++){
            if(minVal%i != 0)   continue;
            else{
                int q = minVal/i;
                if(maxVal % q == 0)     return q;
                if(maxVal % i == 0)     res = max(res, i);
            }
        }
        return res;
    }
};