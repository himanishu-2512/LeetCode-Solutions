class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            if(target>=matrix[i][0]&&target<=matrix[i][n-1]){
                for(int j=0;j<n;j++){
                    if(target==matrix[i][j]){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
    }
    
};