class Solution {
public:
    int countOdds(int low, int high) {
        int count = high - low + 1;
        int ans = 0;
        if(count%2 == 0){
            ans = count/2;
        }
        else {
            if(low % 2 == 0){
                ans = count/2;
            }else{
                ans = (count/2)+1;
            }
        }
        return ans;
    }
};
