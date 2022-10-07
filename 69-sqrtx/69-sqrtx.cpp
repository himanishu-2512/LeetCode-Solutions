class Solution {
public:
    unsigned int mySqrt(int x) {
        if(x<1&&x>=0){
            return 0;
        }
        else if(x<4&&x>=1){
            return 1;
        }else{
             for(unsigned int i=2;i<=x;i++){
                 if(i*i==x)
                     return i;
                 else if(i*i>x){
                     return i-1;
                     }
             }
            
        }
        return x ;
       
    }
};