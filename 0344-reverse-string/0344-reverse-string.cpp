class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0,high=s.size()-1;
        for(int i=0;i<(s.size())/2;i++){
            // cout<<s[low]<<" "<<s[high];
            char c=s[low];
            s[low]=s[high];
            s[high]=c;
            low++;
            high--;
        }
    }
};