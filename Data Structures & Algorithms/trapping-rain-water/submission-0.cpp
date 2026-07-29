class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> maxl(n);
        vector<int> maxr(n);

        // Build maxl
        maxl[0] = 0;
        for (int i = 1; i < n; i++) {
            maxl[i] = max(maxl[i - 1], height[i - 1]);
        }

        // Build maxr
        maxr[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            maxr[i] = max(maxr[i + 1], height[i + 1]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int water = min(maxl[i], maxr[i]) - height[i];
            if (water > 0)
                ans = ans + water;
        }

        return ans;
    }
};