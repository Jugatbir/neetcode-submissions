class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int j = nums.size();
        unordered_map<int, int> mp;
        vector<vector<int>> two_d(j + 1);
        vector<int> ans;

        for (auto n : nums) {
            mp[n]++;
        }
        for (auto m : mp) {
            two_d[m.second].push_back(m.first);
        }
        for (int r = j; r >= 0; r--) {
            for (auto y : two_d[r]) {
                ans.push_back(y);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }
    }
};
