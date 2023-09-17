class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        stack.push('-1');
        for(int i=0;i<s.length();i++){
          if(s[i]=='('||s[i]=='{'||s[i]=='['){
              stack.push(s[i]);
          }
          else{
             if(!(s[i]==')'&&stack.top()=='(')&&!(stack.top()=='{'&&s[i]=='}')&&!(stack.top()=='['&&s[i]==']'))return false;
             else stack.pop();
          }
        }
        if(stack.size()!=1)return false;
        return true;
    }
};