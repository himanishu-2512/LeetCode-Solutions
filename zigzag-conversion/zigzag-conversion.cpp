class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        vector<vector<char>> v(numRows,vector<char>());
        int x=0;
        while(x<s.size()){
        for(int i=0;i<numRows&&x<n;i++){
        
            v[i].push_back(s[x++]);
        }
        for(int i=numRows-2;i>0&&x<n;i--){
          
           v[i].push_back(s[x++]);
        }
        }
        string st="";
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
               
                      st.push_back(v[i][j]);
            }
            cout<<endl;
        }
        return st;
    }
};