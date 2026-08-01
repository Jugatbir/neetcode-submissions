class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>freq1;
        unordered_map<char, int>freq2;
        int r = 0;
        int l = 0;
        int mini = s.size()+1;
        int start = l;
        int yea = 0;

        for(auto i : t){
            freq1[i]++;
        }
        int required = freq1.size();

        for(r; r<s.size();r++){
            freq2[s[r]]++;
            if(freq2[s[r]] == freq1[s[r]]){
                yea++;
            }

            while(yea == required){
                if (r - l +1 < mini){
                    start = l;
                    mini = r - l + 1;
                }   
                freq2[s[l]]--;

                if(freq2[s[l]] < freq1[s[l]]){
                    yea--;
                }
                l++;
            }
        }
        if(mini != s.size()+1){
            return s.substr(start, mini);
        }else{
            return "";
        }
    }
};
