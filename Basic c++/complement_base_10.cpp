#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0,j=0,ans=0;
        if(n==0)
            return 1;
        while(n!=0){
            int bits=n&1;
            int bits1=bits^1;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                break;
            }
            ans=(bits1*pow(2,i))+ans;
            i++;
            n=n>>1;
        }
        return ans;
    }
};
int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.bitwiseComplement(n);
}