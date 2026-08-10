class Solution {
   public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> s;
        int leftSmall[heights.size()];
        int rightSmall[heights.size()];
        int ans = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                leftSmall[i] = 0;
            }else{
                leftSmall[i] = s.top()+1;
            }
                s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        
        for(int i = heights.size()-1; i >= 0; i--){
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                rightSmall[i] = heights.size()-1;
            }else{
                rightSmall[i] = s.top()-1;
            }
                s.push(i);
        }
        for(int i = 0; i<heights.size(); i++){
        int width = rightSmall[i]-leftSmall[i]+1;
            ans = max(ans, heights[i] * width);
        }
        return ans;
    }
};