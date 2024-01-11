class Solution {
public:
    int minTimeToType(string word) {
        int time = word.size();
        char x = 'a';
        for(auto ch:word){
            int dis = abs(ch - x);
            time += min(dis, 26-dis);
            x = ch;
        }
        return time;
    }
};