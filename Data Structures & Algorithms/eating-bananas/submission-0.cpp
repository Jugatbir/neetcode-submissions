class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
//bananas per hr = k
    int l = 1;
    int r = *max_element(piles.begin(), piles.end());
    int hrs = 0;
    while(l<=r){
        int mid = (l+r)/2;
        int ans = 0;
        for(int i = 0; i<piles.size(); i++){
                if(piles[i]%mid == 0){
                    hrs = piles[i]/mid;
                }else{
                    hrs = (piles[i]/mid)+1;
                }
                    ans+= hrs;
        }
            if(ans <= h){
                r = mid-1;
                mid = (l+r)/2;
            }else{
                l = mid+1;
                mid = (l+r)/2;
            }
    }
        return l;

    }
};