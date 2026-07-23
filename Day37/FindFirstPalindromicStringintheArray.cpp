class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i< words.size(); i++){
            string word = words[i];
            int left = 0 , right = word.size() - 1;
            while(left < right){
                if(word[left] != word[right]){
                    break ; //not a palindrome
                }
                left++;
                right--;
            }
            if(left>=right) return word;
        }
        return "";
    }
};
