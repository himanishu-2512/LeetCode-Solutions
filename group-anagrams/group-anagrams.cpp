class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string x:strs){
            string w=x;
            sort(x.begin(),x.end());
            m[x].push_back(w);
        }
        vector<vector<string>> v;
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }
};