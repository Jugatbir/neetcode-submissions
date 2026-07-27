class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> final;

        for(int fix = 0; fix<nums.size()-2;fix++){
            int l = fix + 1;
            int r = nums.size() -1;
            while(l<r){
                int sum = nums[fix] + nums[l] + nums[r];

                    if(sum < 0){
                        l++;
                    }else if(sum > 0){
                        r--;
                    }else{
                        final.insert({nums[fix], nums[l], nums[r]});
                        l++;
                        r--;
                    }
            }
        }
        vector<vector<int>>ans(final.begin(), final.end());
        return ans;
    }
};