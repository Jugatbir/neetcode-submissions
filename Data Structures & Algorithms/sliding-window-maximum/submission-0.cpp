class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k){
        deque<int> lala;
        vector<int> ans;

        for (int r = 0; r < nums.size(); r++) {
            while (!lala.empty() && lala.front() <= r-k) {
                lala.pop_front();
            }
            while(!lala.empty() && nums[r] >= nums[lala.back()]){
                lala.pop_back();
            }
            lala.push_back(r);
            if(r >= k - 1){
                    ans.push_back(nums[lala.front()]);
            }
        }
        return ans;
    }
};
