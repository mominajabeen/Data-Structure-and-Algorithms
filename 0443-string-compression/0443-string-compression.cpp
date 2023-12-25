class Solution {
public:
    int compress(vector<char>& chars) {
        int k = 0;
        for(int i = 0, j; i<chars.size();i = j){
            for(j = i; j<chars.size() && chars[i] == chars[j]; j++){
                // j++;
            }
            chars[k++] = chars[i];
            if(j-i > 1){
                for(auto x:to_string(j-i))
                chars[k++] = x;
            }
        }
        return k;
    }
};