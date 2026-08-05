class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int>ans(temperatures.size());
        for (int i = temperatures.size() - 1; i >= 0; i--){
            if(st.empty()){
                st.push(i);
                ans.back() = 0;
            }
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = 0;
            }else if(temperatures[st.top()] > temperatures[i]){
                    int day = st.top() - i;
                    ans[i] = day;
            }
            st.push(i);
        }
        return ans;
    }
};
