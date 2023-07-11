class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi=0;
        int count=0;

        for(int i=0;i<k;i++){
         if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
             count++;
         }
        }
        maxi=max(maxi,count);
        for(int i=k,j=0;i<s.size();i++,j++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'){
             count++;
         }
         if(s[j]=='a'||s[j]=='e'||s[j]=='o'||s[j]=='u'||s[j]=='i')count--;

          maxi=max(maxi,count);
        }
        return maxi;
    }
};