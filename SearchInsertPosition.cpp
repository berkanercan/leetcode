
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() -1;
        
        while(begin < end){
            int mid = (begin + end) / 2;
            
            if(target > nums[mid])
                begin = mid+1;
            else 
                end = mid;
        }
        
        if( target > nums[begin])
            return begin+1;
        else 
            return begin;
    }
};
