class Solution {
public:
    int gcd(int a , int b){
        if(b == 0) return a;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        // smallest and greatest element nikaal lo 
        int smallest = INT_MAX;
        int greatest =INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++){
            smallest = min(smallest , nums[i]);
            greatest = max(greatest,nums[i]);
        }
        return gcd(greatest,smallest);
    }
};
