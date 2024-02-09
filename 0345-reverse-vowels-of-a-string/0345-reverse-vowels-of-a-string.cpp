class Solution {
public:
    string reverseVowels(string s) {
        int low = 0;
        int high = s.size()-1;
        
        while(low < high){
            if((tolower(s[low]) == 'a' or tolower(s[low]) == 'e' or tolower(s[low]) == 'i' or tolower(s[low]) == 'o' or tolower(s[low]) == 'u')&&(tolower(s[high]) == 'a' or tolower(s[high]) == 'e' or tolower(s[high]) == 'i' or tolower(s[high]) == 'o' or tolower(s[high]) == 'u')){
                char temp = s[low];
                s[low] = s[high];
                s[high] = temp;
                low++;
                high--;
            }
            else if(tolower(s[low]) == 'a' or tolower(s[low]) == 'e' or tolower(s[low]) == 'i' or tolower(s[low]) == 'o' or tolower(s[low]) == 'u'){
                high--;
            }
            else if(tolower(s[high]) == 'a' or tolower(s[high]) == 'e' or tolower(s[high]) == 'i' or tolower(s[high]) == 'o' or tolower(s[high]) == 'u') low++;
            else{
                low++;
                high--;
            }
        }
        return s;
    }
};
