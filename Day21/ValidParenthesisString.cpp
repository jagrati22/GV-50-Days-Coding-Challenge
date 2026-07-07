class Solution {
public:
    bool checkValidString(string s) {
        stack<int>openStack;
        stack<int>starStack;
        for(int i = 0 ; i<s.length();i++){
            if(s[i] == '('){
                openStack.push(i);
            }
            else if(s[i] == '*'){
                starStack.push(i);
            }else{
                if(!openStack.empty()) openStack.pop();
                else if(!starStack.empty()) starStack.pop();
                else{
                    return false;
                }
            }
        }
        while(!starStack.empty() && !openStack.empty() ){
            if(openStack.top() < starStack.top()){
                starStack.pop();
                openStack.pop();
            }else{
                return false;
            }
        }
        return openStack.empty();
    }
};
