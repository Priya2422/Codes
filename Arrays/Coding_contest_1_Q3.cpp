#include <iostream>
#include<vector>
using namespace std;
bool isposs(int n, vector<vector<int>> arr, int B,int mid){
    int sum=0;
      
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if(arr[i][j]<=mid)
            {sum=sum+arr[i][j];}
     
        }    
       
    }

    if(sum<=B)return true;
    return false;
}
int findMaxX(int n, vector<vector<int>> &arr, int B)
{

    int s=1,e=B;
    int mid=s+((e-s)/2);
    int ans=0;
    while(s<=e){
        if(isposs(n,arr,B,mid)){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
       mid=s+((e-s)/2); 
    }
  
    return ans;
}
int main()
{
      
    vector<vector<int>> vect
    {
       {478,903,849},
{61,344,255,28,951,88,219,547,889,467,772,523,500,3},
{871,68,931,679,882,414,313,713,947,332,318,306,638,117},
{50,240,113,343,312,706,240,356},
{37,845,697,307,600,914,868,145,725}
    };
int n=5,B=623;
cout<<findMaxX(n,vect,B);
    return 0;
}
