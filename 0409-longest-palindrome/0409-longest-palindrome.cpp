class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        for(char c:s){
            map[c]++;
        }
        int maxLength = 0;
        bool oddFind = false;
        
        for(auto &[_,freq]:map){
            if(freq%2 == 0) maxLength += freq;
            else{
                maxLength += freq-1;
                oddFind = true;
            }
        }
        if(oddFind) maxLength++;
        return maxLength;
    }
};