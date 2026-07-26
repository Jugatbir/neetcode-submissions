class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (char x : s) {
            if (isalnum(x)) {
                cleaned.push_back(tolower(x));
            }
        }
        s = cleaned;        

        int l = 0;
        int r = s.size() - 1;

        
        for(int j = 0; j<s.size(); j++){
            if(s[l] == s[r]){
                l++;
                r--;
            }else{
                return false;
                break;
            }
        }
        return true;
    }
};