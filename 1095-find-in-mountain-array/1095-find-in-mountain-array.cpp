/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length();
        int peak = findPeak(mountainArr, 1, length-2);
        int increasingIndx = binarySearch(mountainArr, 0, peak, target, false);
        if(mountainArr.get(increasingIndx) == target)   return increasingIndx;
        
        int decreasingIndx = binarySearch(mountainArr, peak+1, length-1, target, true);
        if(mountainArr.get(decreasingIndx) == target)   return decreasingIndx;
        
        return -1;
    }
    private:
    int findPeak(MountainArray &mountainArr, int low, int high){
        
        while(low != high){
            int mid = low+(high - low)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                low = mid+1;
            }
            else high = mid;
        }
        return low;
    }
    int binarySearch(MountainArray &mountainArr, int low, int high, int target, bool reversed){
        while(low != high){
            int mid = low +(high-low)/2;
            if(!reversed){
                if(mountainArr.get(mid) < target){
                    low = mid + 1;
            }
                else    high = mid;
        }
            else{
            
                if(mountainArr.get(mid) > target)      low = mid+1;
                else
                    high = mid;
            }
        }
        return low;
    }
};