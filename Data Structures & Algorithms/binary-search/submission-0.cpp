class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size()-1;
        int middle = (l+r)/2;

        if(target == nums[middle]){
            return middle;
        }
        while(l <= r){
            if(target < nums[middle]){
                r = middle-1;
            }else if(target > nums[middle]){
                l = middle+1;
            }
            if(target == nums[middle]){
                return middle;
            }
            middle = (l+r)/2;
        }
            return -1;
    }
};
