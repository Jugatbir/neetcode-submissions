class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        int current;
        unordered_set<int>dabba;

        for(int i = 0; i < nums.size(); i++){
            dabba.insert(nums[i]);
        }
        for(int j = 0; j < nums.size(); j++){
            int len = 1;
            
            if(dabba.find(nums[j]-1) == dabba.end()){
                current = nums[j];
            while(dabba.find(current + 1) != dabba.end()){
                current +=1; 
                len += 1;
            }
            }
        if(len > ans){
            ans = len;
            len = 1;
        }
        }
    return ans;
    }
};
