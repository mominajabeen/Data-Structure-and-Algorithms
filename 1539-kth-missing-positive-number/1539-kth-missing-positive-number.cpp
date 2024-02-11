class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missingNumbers;
        int i = 0;
        while(i<arr.size()){
            if(arr[i] > 0 && arr[i] <= arr.size() && arr[i] != arr[arr[i]-1])
                swap(arr[i], arr[arr[i]-1]);
            else    i++;
        }
        unordered_set<int> set;
        for(i = 0; i<arr.size(); i++){
            if(arr[i] != i+1){
                missingNumbers.push_back(i+1);
                set.insert(arr[i]);
            }
        }
        for(i = 1; missingNumbers.size() < k; i++){
            int candidateNumber = i+arr.size();
            if(set.find(candidateNumber) == set.end())  missingNumbers.push_back(candidateNumber);
        }
        return missingNumbers[k-1];
    }
};