class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;
        if(s1.size() > s2.size())   return false;
        int k = s1.size();
        for(int i = 0; i< s1.size(); i++){
            mp[s1[i]]++;
        }
        unordered_map<char, int> mp2;
        for(int i = 0; i<s1.size(); i++){
            mp2[s2[i]]++;
        }
        if(mp == mp2){
            return true;
        }
        for(int i = k; i < s2.size(); i++){
            mp2[s2[i]]++;
            mp2[s2[i-k]]--;
            if(mp2[s2[i-k]] == 0)  mp2.erase(s2[i-k]);
            if(mp == mp2){
                return true;
            }
        }
        return false;
    }
};