class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int num=0;
        for(int i=strlen(&s[0])-1;i>=0;i--){
            if(s[i]!=' '){
                count=1;
                num++;
            }
if(s[i]==' '&& count==1){
    break;
}
        }
        return num;
    }
};