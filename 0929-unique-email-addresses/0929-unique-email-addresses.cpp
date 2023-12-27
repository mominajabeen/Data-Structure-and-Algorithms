class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int res = 0;
        set<string> validemails;
        bool flag = false;
        for(int i = 0; i < emails.size(); i++){
            string s = "";
            int x = 0;
            while(emails[i][x] != '@'){
                if(emails[i][x] == '.') {
                    x++;
                    continue;
                }
                else if(emails[i][x] == '+'){
                    while(emails[i][x] != '@'){
                        x++;
                    }
                    break;
                }
               else {
                   s += emails[i][x];
                   x++;
               }
            }
            if(emails[i][x] == '@'){
                s += emails[i][x];
                x++;
            }
            while(x<emails[i].size()){
                s += emails[i][x];
                x++;
            }
            validemails.insert(s);
        }  
        return validemails.size();
    }
};