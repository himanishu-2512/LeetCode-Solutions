class Solution {
public:
    int romanToInt(string s) {
     map<char,int> m;
        m['I']=1;
        m['X']=10;
        m['V']=5;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
    
        int sum=0;
        for(int i=0;i<strlen(&s[0]);i++){
          int val=  m[s[i]];
          if(val<(m[s[i+1]]))
          sum=sum-val;
          else{
            sum=sum+val;
          }
        }
        return sum;;
    }
};