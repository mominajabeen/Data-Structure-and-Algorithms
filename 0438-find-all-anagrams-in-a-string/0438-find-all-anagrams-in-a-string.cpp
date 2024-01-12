class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> res;
        if(s.size()<p.size())   return res;
        unordered_map<char, int> mapP, mapS;
        for(int i = 0; i < p.size(); i++){
            mapP[p[i]]++;
            mapS[s[i]]++;
        }
        if(mapP == mapS)    res.push_back(0);
        for(int i = 1; i < s.size()-p.size()+1; i++){
            mapS[s[i+p.size()-1]]++;
            mapS[s[i-1]]--;
            if(mapS[s[i-1]]<1)  mapS.erase(s[i-1]);
            if(mapS == mapP)    res.push_back(i);
        }
        return res;
    }
};