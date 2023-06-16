class Solution {
public:
int c(int n,int r){
    double sum=1;
    for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
return (int)sum;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                  v.push_back(c(i,j));
            }
            v1.push_back(v);
        }
        return v1;
    }
};