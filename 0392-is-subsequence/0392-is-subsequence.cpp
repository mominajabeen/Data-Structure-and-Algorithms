class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pointS = 0, pointT = 0, count = 0;
        if(s.size() == 0)   return true;
        while(pointS < s.size() && pointT < t.size()){
            
            if(s[pointS] == t[pointT]){
                count++;
                pointS++;
            }
            if(count == s.size())   return true;
            pointT++;
        }
        return false;
    }
};