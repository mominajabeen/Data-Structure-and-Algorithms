class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;
        for(int i = 0; i<arr.size(); i++){
            map[arr[i]]++;
        }
        
        for(int i = 0; i<arr.size(); i++){
            if(map[arr[i]] == 1){
                
                if(k == 1)
                    return arr[i];
                k--;
            }
        }
        return "";
    }
};