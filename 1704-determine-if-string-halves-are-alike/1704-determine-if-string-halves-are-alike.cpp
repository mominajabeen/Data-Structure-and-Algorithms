class Solution {
public:
    bool halvesAreAlike(string s) {
        int countLeft = 0;
        int countRight = 0;
        int n = s.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            if(tolower(s[l]) == 'a'||tolower(s[l]) == 'e' || tolower(s[l]) == 'o' || tolower(s[l]) =='i' ||tolower(s[l])=='u' )   countLeft++;
            if(tolower(s[r]) == 'a'||tolower(s[r])== 'e' || tolower(s[r]) =='o' || tolower(s[r])== 'i' ||tolower(s[r])=='u' )   countRight++;
            l++;
            r--;
        }
        return countRight == countLeft;
    }
};