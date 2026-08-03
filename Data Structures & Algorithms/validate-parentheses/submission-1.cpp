class Solution {
public:
    bool isValid(string s) {
        stack<char>potty;
        for (int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                potty.push(s[i]);

            if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(potty.empty()){
                    return false;
                }
                if(potty.top() == '(' && s[i] == ')'){
                    potty.pop();
                }else if(potty.top() == '[' && s[i] == ']'){
                    potty.pop();
                }else if(potty.top() == '{' && s[i] == '}'){
                    potty.pop();
                }else{
                    return false;
                }
            }
        }
            if(potty.empty()){
                return true;
            }else{
                return false;
            }
        
    }
};
