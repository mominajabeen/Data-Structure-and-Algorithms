class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map_magazine;
        for(char c:magazine){
            map_magazine[c]++;
        }
        unordered_map<char, int> map_ransomNote;
        for(char c:ransomNote){
            map_ransomNote[c]++;
        }
        for(int i = 0; i<map_ransomNote.size(); i++){
            if(map_ransomNote[i] > map_magazine[i])     return false;
        }
        return true;
    }
};