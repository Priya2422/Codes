#include<iostream>
using namespace std;
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {    
        int i=0,j=n-1;
        int m=(i+j)/2;
        while(i<=j){
            if(arr[m]==k){
                return m;
            }
            else if(k>arr[m]){
                i=m+1;
                m=(i+j)/2;
            }else if(k<arr[m]){
                j=m-1;
                m=(i+j)/2;
            }
        }
        return  -1;
    }
};
int main() {

        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
  
}