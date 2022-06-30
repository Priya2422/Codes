#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int co=0;
        while(n){
            if(n&1){
                co++;
            }
            n=n>>1;
        }
    return co;
    }
    
};
int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.hammingWeight(n);
}