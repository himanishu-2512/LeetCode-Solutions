class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string s1;
    for(int i=0;i<strlen(&s[0]);i++){
        if(s[i]==' '&& s1!=""){
            v.push_back(s1);
            s1="";}
        if(s[i]!=' '){
            s1+=s[i];
        }
    }
        if(s1!="")v.push_back(s1);
        s1="";
        for(int i=v.size()-1;i>=0;i--){
            if(i==0)s1+=v[i];
            else
            s1+=v[i]+' ';
            // cout<<v[i];
        }
        return s1;
    }
};