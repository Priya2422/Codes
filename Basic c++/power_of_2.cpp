#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
 if(n<0)return false;
        int count=0;
        while(n!=0){
            int rem=n&1;
            if(rem==1){
                count++;
            }
            n=n>>1;
        }
        if(count==1)return true;
        return false;
    }
};
int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.isPowerOfTwo(n);
}