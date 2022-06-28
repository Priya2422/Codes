#include<iostream>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum>maxsum){
                maxsum=currsum;  //storing maximum sum of subarray
            }
            if(currsum<0){ 
                currsum=0; //discarding negative sum
            }
        }
        return maxsum;
    }
};
int main()
{
    int n;
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    
}
