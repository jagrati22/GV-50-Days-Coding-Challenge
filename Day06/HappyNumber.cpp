class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int>st;
       while(n!=1 && st.find(n) == st.end()){
        int sum = 0;
        st.insert(n);
        while(n>0){
            int temp = n%10;
            sum = sum + (temp*temp);
            n = n/10;
        }
        n  = sum;
       }
       return n == 1;
    }
};
