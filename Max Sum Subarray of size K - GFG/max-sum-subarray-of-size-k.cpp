//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here 
        long int max=0;
        long int sum=0;
        for(int i=0;i<k;i++){
            sum+=Arr[i];
        }
        for(int i=k;i<N;i++){
    if(max<sum)max=sum;
    sum-=Arr[i-k];
    sum+=Arr[i];
    
        }
        if(max<sum)max=sum;
        return max;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends