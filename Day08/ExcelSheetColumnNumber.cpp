class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        
        for (char c : columnTitle) {
            // 'A' - 'A' + 1 = 1
            // 'B' - 'A' + 1 = 2
            int digitValue = c - 'A' + 1;
            
            // Result ko base-26 mein shift karein aur naya digit add karein
            // Note: C++ mein integer overflow se bachne ke liye data types ka dhyan rakhna hota hai, 
            // par LeetCode ke constraints ke mutabik 'result' int ki range mein hi rahega.
            result = result * 26 + digitValue;
        }
        
        return result;
    }
};
