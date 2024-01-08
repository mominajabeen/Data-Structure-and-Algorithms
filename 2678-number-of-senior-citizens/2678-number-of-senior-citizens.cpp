class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i<details.size(); i++){
            string s = details[i].substr(11, 2);
            int age = 0;
            for(int j = 0; j < 2; j++){
                int digit = s[j] - '0';
                age = age*10;
                age += digit;
            }
            if(age > 60)   count++;

        }
    return count;
    }
};