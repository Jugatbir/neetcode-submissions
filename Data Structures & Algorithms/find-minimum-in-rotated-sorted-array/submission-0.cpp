class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0;
        int r = nums.size()-1;
        while(i < r){
            int mid = (r+i)/2;
            if(nums[mid] > nums[r]){
                i = mid + 1;
            }else{
                r = mid;
            }
        }
        return nums[i];
    }
};
