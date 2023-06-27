class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string s;
        int i;
        for(i=0;i<min(n,m);i++){
          s.push_back(word1[i]);
          s.push_back(word2[i]);
        }
        if(n<m){
             s+=word2.substr(i);
        }
        if(n>m){
             s+=word1.substr(i);
        }
        return s;
    }
};