class Solution {
public:
    bool isPalindrome(int x) {
        // edge cases
        if(x<0 || (x != 0 && x%10 == 0)){
            return false;
        }
        int reversehalf = 0;
        while(x > reversehalf){
            int digit = x%10;
            reversehalf = reversehalf *10 + digit;
            x = x/10;
        }
        // check for even and length
        return (x == reversehalf) || (x == reversehalf/10);
    }
};
