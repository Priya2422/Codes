#include<iostream>
#include<cmath>
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
        float factor =1.0;
        double fac =9.0;
        float ans=temp;
        if(ans*ans==n)return ans;
        for(int m=0,mul=10;m<prec;m++,mul=mul*10){
            factor=factor/10.0;
            fac=fac/10.0;
            float i=factor;
            double j=fac;
            float mid=(i+j)/2;
            float je=ans;
            while(i<=j){
                je=je+mid;
                if(je*je<n){
                    ans=je;
                    i=mid+factor;
                }
                else if(je*je==n){
                    ans=je;
                    return ans;
                }else{
                    j=mid-factor;
                }
                mid=(i+j)/2;
                int k=mid*mul;
                mid=trunc(k);
                mid=mid/mul;
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
    cout<<st.precision(n,4,val);
}