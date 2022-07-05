#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
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
};
int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.mySqrt(n);
}