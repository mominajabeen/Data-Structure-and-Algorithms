class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> set(brokenLetters.begin(), brokenLetters.end());
        
        int count = 0, res = 0;
        for(int i = 0; i<= text.size(); i++){
            if(i == text.size() or text[i] == ' '){
                res += count == 0;
                count = 0;
            }
            else if(count == 0){
                if(set.find(text[i]) != set.end())  count++;
            }
        }
        return res;
    }
};