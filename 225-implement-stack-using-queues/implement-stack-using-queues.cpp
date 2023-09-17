class MyStack {
public:
queue<int> q1,q2;
int i;
    MyStack() {
         i=0;
    }
    
    void push(int x) {
        if(i==0){
            i=1;
            q2.push(x);
            while(!q1.empty()){
                int y=q1.front();
                q1.pop();
                q2.push(y);
            }
        }else{
            i=0;
            q1.push(x);
            while(!q2.empty()){
                int y=q2.front();
                q2.pop();
                q1.push(y);
            }
        }
    }
    
    int pop() {
        int x;
        if(i==0){
            x=q1.front();
            q1.pop();
            return x;
        }
            x=q2.front();
            q2.pop();
            return x;
    

    }
    
    int top() {
        int x=0;
        if(i==0){
            x=q1.front();
            return x;
        }
        x=q2.front();    
        return x; 
    }
    
    bool empty() {
        if(i==0){
          return q1.empty();
        }
        return q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */