class Solution {
public:
    bool isPalindrome(int x) {
        long long int sum=0;
        int num=x;
        if(x<0){
            return false;
        }else{
            for(int i=0;;i++){
 int n=x%10;
 sum=sum*10+n;
           
    x=x/10;
     if(x==0)
            {break;}

            }
            if(sum==num)
          return true; 
else {
    
return false;
}


        }
        
    }
};