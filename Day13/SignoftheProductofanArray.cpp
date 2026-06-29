class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative_no = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                negative_no++;
            }
        }
        if(negative_no %2 == 0){
            return 1;
        }else{
            return -1;
        }
    }
};
