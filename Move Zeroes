class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if( nums[i] == 0){
                nums.erase(nums.begin()+i);
                zeroCount++;
                i--;
            }
        }
        
        for(int i = 0; i < zeroCount; i++){
            nums.push_back(0);
        }
    }
};
