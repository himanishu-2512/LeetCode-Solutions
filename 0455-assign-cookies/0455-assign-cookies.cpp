class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gs=g.size();
        int ss=s.size();
        if(gs==0||ss==0){
            return 0;
        }
        int maxi=max(gs,ss);
        int gg=0,sg=0,count=0;
        
        for(int i=0;i<maxi;i++){
        if(g[gg]<=s[sg]){
            gg++;
            sg++;
            count++;
        }
            else{
                sg++;
            }
        if(sg==ss||gg==gs){
            break;
        }
        }
        return count;
    }
};