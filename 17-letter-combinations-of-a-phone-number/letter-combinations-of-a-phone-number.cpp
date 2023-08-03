class Solution {
public:
vector<string> v1;
void solve(vector<string> &v,string &digits,int n,string &s){
    if(n==digits.size()){
        v1.push_back(s);
        return;
    }
    for(int i=0;i<v[digits[n]-'0'-2].size();i++){
        s.push_back(v[digits[n]-'0'-2][i]);
      solve(v,digits,n+1,s);
      s.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return v1;
        vector<string> v(8);
        v[0]="abc";
        v[1]="def";
        v[2]="ghi";
        v[3]="jkl";
        v[4]="mno";
        v[5]="pqrs";
        v[6]="tuv";
        v[7]="wxyz";
        string s;
        solve(v,digits,0,s);
        return v1;


    }
};