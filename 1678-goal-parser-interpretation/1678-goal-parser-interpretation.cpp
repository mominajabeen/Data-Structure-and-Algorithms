class Solution {
public:
    string interpret(string command) {
        string str = "";
        int i = 0;
        while(i<command.size()){
            if(command[i] == 'G'){
               str.push_back('G');
               i++;
               continue;
            }
            if(command[i] == '(' && command[i+1] == ')'){
                str.push_back('o');
                i +=2;
            } 
            else   {
                str+="al";
                 i +=4;
                 }
        }
        return str;
    }
};