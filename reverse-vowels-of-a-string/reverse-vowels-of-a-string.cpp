class Solution {
public:
    string reverseVowels(string s) {
    stack<char> st;
        for(int i=0;i<s.size();i++){
            char c=tolower(s[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            st.push(s[i]);
        }
        string str="";
        for(int i=0;i<s.size();i++){
            char c=tolower(s[i]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                str.push_back(st.top());
                st.pop();
            }else{
                str.push_back(s[i]);
            }
        }
        return str;
    }
};