class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
        if((strlen(&s[0]))%2!=0){
            return false;
        }
        for(int i=0;i<strlen(&s[0]);i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            st.push(s[i]);
            else if(!st.empty()){
                
                switch(st.top()){
                    case '(':
                        if(s[i]!=')')
                            return false;
                        else st.pop();
                        break;
                    case '{':
                        if(s[i]!='}')
                            return false;
                        else
                            st.pop();
                        break;
                    case '[':
                        if(s[i]!=']')
                            return false;
                        else st.pop();
                        break;
                    default:return false;
                    
                }
               
            }
            else{
                return false;
            }
              
            
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};