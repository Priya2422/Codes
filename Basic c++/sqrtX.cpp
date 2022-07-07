#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrtInt(int x) {
           int i=0,j=x;
   long long int mid=i+((j-i)/2);
   long long int ans=-1;
    while(i<=j){
        long long int square=mid*mid;
        if(square==x)return mid;
        if(square>x){
            j=mid-1;
        }
        else {
            ans=mid;
            i=mid+1;
        }
        mid=i+((j-i)/2);
    }return ans;
    }
    double precision(int n,int prec,int temp){
        double factor =1;
        double fac =9;
        double ans=temp;
        if(ans*ans==n)return ans;
        for(int m=0;m<prec;m++){
            factor=factor/10;
            fac=fac/10;
            double i=factor;
            double j=fac;
            double mid=(i+j)/2;
            double je=ans;
            while(i<=j){
                je=je+mid;
                if(je*je<n){
                    ans=je;
                    i=mid+1;
                }
                else if(je*je==n){
                    ans=je;
                    return ans;
                }else{
                    j=mid-1;
                }
                mid=(i+j)/2;
            }
        }
         return ans;
    }
};

int main(){
    int n;
    cin>>n;
    Solution st;
    int val=st.mySqrtInt(n);
    // cout<<val;
    cout<<st.precision(n,3,val);
}