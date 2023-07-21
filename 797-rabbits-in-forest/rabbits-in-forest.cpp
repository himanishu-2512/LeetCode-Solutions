class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        int count=0;
        for(int i:answers){
            if(m[i]==i){
                m[i]++;
                count+=m[i];
                m[i]=0;
            }
            else{
                m[i]++;
            }
        }
        for(auto i:m){
            if(i.second!=0)
            count+=i.first+1;
        }
        return count;
    }
};