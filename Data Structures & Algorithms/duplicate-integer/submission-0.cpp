class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>dabba;
        for(int i = 0; i < nums.size(); i++){
            if(dabba.find(nums[i]) == dabba.end()){
                dabba.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};