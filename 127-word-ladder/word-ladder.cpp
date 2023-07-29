class Solution {
public:
   
    void bfs(queue<pair<string,int>> &q,string s,int index,int i,unordered_map<string,int> &m){
        for(int j=0;j<26;j++){
            s[i]=char('a'+j);
                    if(m[s]!=0){
                        q.push({s,index+1});
                        m[s]--;
                    }
                }
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int> m;
        for(int i=0;i<wordList.size();i++){
            m[wordList[i]]++;
        }
        int z=0;
        queue<pair<string,int>> q; 
        q.push({beginWord,1}); 
           
        while(!q.empty()){
            auto [s,index]=q.front();
            q.pop();
            if(s==endWord)return index;
            for(int i=0;i<s.size();i++){
                bfs(q,s,index,i,m);
            }
        }

       return 0;
    }
};