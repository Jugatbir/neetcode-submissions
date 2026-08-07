class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                arr.push_back(matrix[i][j]);
            }
        }
        int l = 0;
        int r = arr.size()-1;
        int middle = (l+r)/2;

        while(l <= r){
            middle = (l+r)/2;
            if(target < arr[middle]){
                r = middle -1;
            }else if(target > arr[middle]){
                l = middle +1;
            }
            if(target == arr[middle]){
                return true;
            }
        }
        return false;
    }
};
