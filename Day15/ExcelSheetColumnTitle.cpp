class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber > 0){
            int rem = columnNumber%26;
            char ch ;
            if(rem == 0){
                ch = 'Z';
                columnNumber--;
            }else{
                ch = 'A' + rem -1;
            }
            ans += ch;
            columnNumber /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
