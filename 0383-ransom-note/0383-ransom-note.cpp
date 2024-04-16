class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for(char c:magazine){
            map[c]++;
        }
        for(char c:ransomNote){
            if(!map[c]){
              return false;  
            }
            else{
                map[c]--;
            }
        }
        return true;
    }
};