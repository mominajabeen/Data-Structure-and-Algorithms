class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = INT_MIN, ans = 0;
        for(int i = 0; i < k; i++){
           ans += nums[i]; 
        }
        res = ans/k;
        
        for(int i = k; i < nums.size(); i++){
            ans -= nums[i-k];
            ans += nums[i];
            res = max(res, ans/k);
        }
        return res;
    }
};