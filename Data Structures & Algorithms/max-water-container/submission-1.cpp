class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r= heights.size()-1;
        int maxi = 0;

        while(l < r){
        int water = (r - l) * min(heights[l], heights[r]);
        maxi = max(maxi, water);
            if(heights[l] < heights[r]){
                l++;
                
            }else{
                r--;
            }
        }
    return maxi;
    }
};
