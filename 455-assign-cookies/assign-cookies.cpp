class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int a=0;
        for(int i=0;i<g.size();){
            if(a>=s.size())break;
            if(s[a]>=g[i]){
                count++;
                i++;
            }
            a++;
        }
        return count;
    }
};