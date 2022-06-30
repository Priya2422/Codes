#include<iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mul=1;
        int diff=0;
        int temp=n;
        int rem=0;
        while(temp){
            rem=temp%10;
            sum+=rem;
            mul*=rem;
            temp=temp/10;
        }
        diff=mul-sum;
        return diff;
    }
};

int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.subtractProductAndSum(n);
}