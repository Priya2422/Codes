#include<climits>
#include<math.h>
#include <cstdlib>
#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int n) {
        int rev=0,j=0;
        int tempo=n;
        while(tempo){
            int rem=tempo%10;
            if(rev>(INT_MAX/10) || rev<(INT_MIN/10))
                return 0;
            rev=(rev*10)+rem;
            j++;
            tempo=tempo/10;
        }
        return rev;
    }
};
int main(){
    int n;
    cin>>n;
    Solution st;
    cout<<st.reverse(n);
}