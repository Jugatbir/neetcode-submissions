class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>poopy;
        int l = 0;
        
        int maxm = 0;
        for(int r = 0; r<s.size(); r++){
            while(poopy.find(s[r]) != poopy.end()){
                poopy.erase(s[l]);
                l++;
            }

            poopy.insert(s[r]);
        int len = r-l+1;
        maxm = max(maxm, len);
        }
        return maxm;
    }
};

