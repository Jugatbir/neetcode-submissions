class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int maxf = 0;
        int l = 0;
        int maxwin = 0;

        for (int r = 0; r < s.size(); r++) {
            freq[s[r]]++;
            maxf = max(maxf, freq[s[r]]);
            int size = r - l + 1;
            int change = size - maxf;

            if(change > k ){
                freq[s[l]]--;
                l++;
            }
            
            size = r - l + 1;
            maxwin = max(maxwin, size);
        }
        return maxwin;
    }
};
