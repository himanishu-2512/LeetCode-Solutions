class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string st="abcdefghijklmnopqrstuvwxyz";
        shifts[shifts.size()-1]%=26;
        for(int i=shifts.size()-2;i>=0;i--){
               shifts[i]=(shifts[i]%26+(shifts[i+1]%26))%26;     
        }

        for(int i=0;i<s.size();i++){
            s[i]=st[(s[i]+shifts[i]-'a')%26];

        }
        return s;
    }
};