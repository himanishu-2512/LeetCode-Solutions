class Solution {
public:
    bool checkZeroOnes(string s) {
        int count_0=0;
        int count_1=0;
        int count=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])count++;
            else{
                if(s[i]=='0'){
                    count_0=max(count_0,count);
                    count=1;
                }
                else{
                    count_1=max(count_1,count);
                    count=1;
                }
            }
        }

        if(s[s.size()-1]=='0'){
            cout<<true;
                    count_0=max(count_0,count);
                    count=1;
                }
                else{
                    
                    count_1=max(count_1,count);
                    count=1;
                }
                cout<<count_1<<" "<<count_0<<endl;
        return count_1>count_0 ;
    }
};