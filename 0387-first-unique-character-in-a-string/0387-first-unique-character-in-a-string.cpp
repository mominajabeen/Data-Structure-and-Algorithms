class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for(int i = 0; i<s.size(); i++){
            map[s[i]]++;
        }
        // int res = -1;
        for(int i = 0; i<s.size(); i++){
            if(map[s[i]]== 1){
                return i;
                break;
            }
        }
        return -1;
    }
};