class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> freq1(26);
        vector<int> freq2(26);
        int target = s1.size();
        int l = 0;
        int r = 0;

        for (char c : s1) freq1[c - 'a']++;

        while (r < s2.size()) {
            if (r < target) {
                freq2[s2[r] - 'a']++;
                r++;
            }

            else {
                freq2[s2[l] - 'a']--;
                l++;
                freq2[s2[r] - 'a']++;
                r++;
            }

            if (freq1 == freq2) return true;
        }

        return false;
    }
};