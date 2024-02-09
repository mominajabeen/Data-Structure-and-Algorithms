class Solution {
public:
    string reverseVowels(string s) {
        int first = 0, last = s.size()-1;
        string vowels = "aeiouAEIOU";
        while(first<last){
            while(first<last && vowels.find(s[first]) == -1)    first++;
            while(first<last && vowels.find(s[last]) == -1)     last--;
            
            swap(s[first], s[last]);
            first++;
            last--;            
        }
        return s;
    }
};