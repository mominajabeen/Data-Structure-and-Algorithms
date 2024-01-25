class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0, r = letters.size() - 1;
        if(letters[0] > target) return letters[0];
        else if(letters[r] < target)    return letters[0];
        char ch = letters[0];
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(letters[mid] > target){
                ch = letters[mid];
                r = mid - 1;
            }
            else if(letters[mid] <= target){
                l = mid+1;
            }
        }
        return ch;
    }
};