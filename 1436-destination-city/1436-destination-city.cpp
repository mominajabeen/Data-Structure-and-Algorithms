class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       set <string> set;
        for(int i = 0; i< paths.size(); i++){
            set.insert(paths[i][0]);
        }
        for(int i = 0; i<paths.size(); i++){
            string candidate = paths[i][1];
            if(set.find(candidate) == set.end())      return paths[i][1];
        }
        return "";
    }
};