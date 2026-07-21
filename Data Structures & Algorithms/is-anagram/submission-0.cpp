class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            unordered_map <char, int> balle;
            for(int i = 0; i < s.size(); i++){
                balle[s[i]]++;
            }

            for(int j = 0; j < t.size(); j++){
                if(balle[t[j]] != 0){
                    balle[t[j]]--;
                }
                else{
                    return false;
                }

            }
            return true;

        }
        return false;
    }
};
