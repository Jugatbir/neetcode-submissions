class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        vector<int> suf(nums.size());
        int product = 1;
        int prod2 = 1;
        vector<int> ans;
        int i = 0;
        int j = nums.size() - 1;

        for (i; i < nums.size(); i++) {
            pre.push_back(product);
            product = product * nums[i];
        }
        for (j; j >= 0; j--) {
            suf[j] = prod2;
            prod2 = prod2 * nums[j];
        }
        for (int k = 0; k < nums.size(); k++) {
            ans.push_back(pre[k] * suf[k]);
        }
        return ans;
    }
};
