class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        if(flowerbed.size()==1&&flowerbed[0]==0){
            flowerbed[0]=1;
            count++;
            
        }
                if(flowerbed.size()>1){
        if((flowerbed[0]|flowerbed[1])!=1){
            flowerbed[0]=1;
            count++;}}
        if(flowerbed.size()>2){
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==1){i++;continue;}
            if((flowerbed[i-1]|flowerbed[i]|flowerbed[i+1])!=1){
                flowerbed[i]=1;
                count++;
                i++;
            }
        }}
        if(flowerbed.size()>1){
        if((flowerbed[flowerbed.size()-2]|flowerbed[flowerbed.size()-1])!=1)count++;}
        return n<=count;
    }
};