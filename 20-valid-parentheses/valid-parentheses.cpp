class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push('1');
        for(int i=0;i<s.size();i++){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(s[i]==')'&&st.top()=='('){
                    st.pop();
                }
                else if(s[i]=='}'&&st.top()=='{'){
                    st.pop();
                }
                else if(s[i]==']'&&st.top()=='['){
                    st.pop();
                }
                else return false;
            }
            else {
                st.push(s[i]);
            }
        }
        if(st.top()=='1')
        return true;
        return false;
    }
};