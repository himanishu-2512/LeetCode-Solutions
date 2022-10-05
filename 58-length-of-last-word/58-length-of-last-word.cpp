class Solution {
public:
    int lengthOfLastWord(string s) {
        bool b=false;
        int num=0;
        for(int i=strlen(&s[0])-1;i>=0;i--){
            if(s[i]!=' '){
            b=true;
                num++;
            }
if(s[i]==' '&& b){
    break;
}
        }
        return num;
    }
};