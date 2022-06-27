#include <bits/stdc++.h>
using namespace std;
#include<climits>
class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
    int max=INT_MIN;
    int size=0;
    for(int i=0;i<n;i++){
    if(a[i]>=max){
        max=a[i];
    }
}
    int max1=INT_MIN;
    for(int i=0;i<m;i++){
    if(b[i]>=max1){
        max1=b[i];
    }
    }
    if(max>max1){
    size=max;
    }
    else if(max1>=max){
    size=max1;
    }
     int *H=new int[size+1];
     for(int i=0;i<size+1;i++){
        H[i]=0;
     }
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
      for(int i=0;i<m;i++){
        H[b[i]]++;
    }
    int count=0;
    for(int i=0;i<size+1;i++){
        if(H[i]>0){
            count++;
        }
     }
     return count;
    }
};
int main() {
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;	
	return 0;
}