class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int number = 0;
        int digit = 0;
        for(auto ch:firstWord){
            number = digit * 10 + (ch - 'a');
            digit = number;
       } 
        int numberSec = 0;
        digit = 0;
        for(auto ch:secondWord){
            numberSec = digit * 10 + (ch - 'a');
            digit = numberSec;
       } 
        int numberTar = 0;
        digit = 0;
        for(auto ch:targetWord){
            numberTar = digit * 10 + (ch - 'a');
            digit = numberTar;
       }
        number += numberSec;
        return number == numberTar;
    }
};