class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxNum = -1;
        int number;
        for(int i = arr.size()-1; i>=0; i--){
            number = arr[i];
            arr[i] = maxNum;
            maxNum = max(maxNum, number);
        }
        // reverse(arr.begin(), arr.end());
        return arr;
    }
};