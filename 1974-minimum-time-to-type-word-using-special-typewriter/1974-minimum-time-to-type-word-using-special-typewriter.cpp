class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        int temp = 0;
        for(auto ch:word){
            time++;
            int chr = ch - 'a';
            int dis = abs(chr - temp);
            if(dis < 13)    time += dis;
            else    time += (26 - dis);
            temp = chr;
        }
        return time;
    }
};