class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> lol;

        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i]; 
            if(lol.find(comp) != lol.end()){
                return{lol.find(comp)->second, i};
            }
            lol.insert({nums[i], i});
        }
        return {};
    }
};
