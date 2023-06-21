class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> m;
        for(int i=0;i<time.size();i++){
            m[time[i]%60]++;
        }
        int count=0;
for(int i=0;i<time.size();i++){
   m[time[i]%60]--;
   count+=m[(60-(time[i]%60))%60];
}
return count;
    }
};