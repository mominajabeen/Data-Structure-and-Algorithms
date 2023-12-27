class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        map<int, int> map;
        
        for(int i = 0; i<items1.size(); i++){
            map[items1[i][0]] = items1[i][1];
        }
        for(int i = 0; i<items2.size(); i++){
            if(map.find(items2[i][0]) != map.end())
                map[items2[i][0]] += items2[i][1];
            else
            map.insert({items2[i][0], items2[i][1]});                             
        }
        for(auto it:map){
            ret.push_back({it.first, it.second});
        }
       return ret;
    }
};