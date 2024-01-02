class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> mp;
        for(int i = 0; i< nums.size(); i++){
            int compliment = target - nums[i];
            if(mp.find(compliment) != mp.end())  {
                res.push_back(mp[compliment]);
                res.push_back(i);
                return res;
            }
            mp.insert({nums[i], i});
        }
        return res;
    }
};