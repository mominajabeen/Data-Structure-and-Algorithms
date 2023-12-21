class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size()-1;
        while(s[n] == ' '){
            n--;
        }
        
        for(int i = n; i >= 0; i--){
            if(s[i] == ' ')     return count;
            else    count++;
        }
        return count;
    }
};