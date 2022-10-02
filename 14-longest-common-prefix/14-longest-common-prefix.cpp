class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int count2=0;
        string s=strs[0];
        
        for(int i=0;i<strlen(&s[0]);i++){
            int count=1;
for(int j=1;j<strs.size();j++){
if(strs[j][i]==s[i]){
    count++;
}
}
if(count==strs.size()){
count2++;

}
else{
    break;
}
        }
        return s.substr(0,count2);
    }
};