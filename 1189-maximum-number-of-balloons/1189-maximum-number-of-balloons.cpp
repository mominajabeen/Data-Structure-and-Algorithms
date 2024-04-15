class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        for(int i = 0; i< text.size(); i++){
            map[text[i]]++;
        }
        int minCount = INT_MAX;
        minCount = min(minCount, map['a']);
        minCount = min(minCount, map['b']);
        minCount = min(minCount, map['l']/2);
        minCount = min(minCount, map['o']/2);
        minCount = min(minCount, map['n']);
        
        return minCount;
    }
};