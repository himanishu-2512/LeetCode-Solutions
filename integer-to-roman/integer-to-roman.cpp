class Solution {
public:
    string intToRoman(int num) {
        vector<string> s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> v={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int i=0;
        string st;
        while(num>0){
            if(num>=v[i]){
                int j=0;
                while(j<s[i].size()){
                    st.push_back(s[i][j++]);
                 
                }
                num-=v[i];
            }
            else i++;
        }
        return st;
    }
};