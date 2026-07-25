class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        int current;
        unordered_set<int>dabba;

        for(int i = 0; i < nums.size(); i++){
            dabba.insert(nums[i]);
        }
        for (int num : dabba) {
            int len = 1;
            
            if(dabba.find(num-1) == dabba.end()){
                current = num;
                while(dabba.find(current + 1) != dabba.end()){
                    current +=1; 
                    len += 1;
                }
            }
            if(len > ans){
                ans = len;
            }
        }
    return ans;
    }
};
