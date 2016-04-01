class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
            return nums.at(0);
            
        int threshold = floor(nums.size()/2);
        sort(nums.begin(), nums.end());
        
        int count = 0;
        for(int i = 1; i < nums.size(); i++){
            if( nums.at(i) == nums.at(i-1) ){
                count++;
                if(count >= threshold)
                    return nums.at(i-1);
            }
            else
                count = 1;
            
        }
    }
};
