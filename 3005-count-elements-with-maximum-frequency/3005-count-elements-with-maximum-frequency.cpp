class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        
        int maxFreq = 0;
        for(auto ele:map){
            maxFreq = max(maxFreq, ele.second);
        }
        // for(int i = 0; i<map.size(); i++){
        //     maxFreq = max(maxFreq, map[nums[i]].second());
        // }
        
        int res = 0;
        for(auto ele:map){
            if(ele.second == maxFreq)    res += maxFreq;
        }
        return res;
    }
};