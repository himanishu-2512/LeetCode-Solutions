class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2)return s.size();
        int count=0;
        int maxi=0;
        unordered_map<char,int> m;
        m[s[0]]=0;
        for(int i=0,j=1;j<s.size();j++){
            if(m.find(s[j])==m.end()){
                m[s[j]]=j;
            }
            else if(m[s[j]]>=i){
               i=m[s[j]]+1;
               m[s[j]]=j;
            }
            else{
                 m[s[j]]=j; 
            }
            count=j-i+1;
            // cout<<count<<endl;
            maxi=max(maxi,count);
          
        }
        return maxi;
    }
};