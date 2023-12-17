class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> res;
        int countPair = 0;
        int countInt = 0;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto it:map){
            countPair += it.second/2;
            countInt += it.second%2;
        }
        res.push_back(countPair);
        res.push_back(countInt);
        return res;
    }
};