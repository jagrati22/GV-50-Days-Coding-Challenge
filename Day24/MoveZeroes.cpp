class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 ; // next non zero jaha hai 
        int j = 0 ; // jagah jaha next non zero aana chahiye
        while( i < nums.size()){
            if(nums[i] != 0){
                if(i != j){
                    swap(nums[i],nums[j]);
                }
                    j++;
                
            }
            i++;
        }
    }
};
