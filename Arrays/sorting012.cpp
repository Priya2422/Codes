
#include<iostream>
using namespace std;
class Solution
{
    public:
    void sort012(int a[], int n)
    {

        int i=0,j=0,k=n-1;
         int temp=0;
          int ttemp=0;
        while(j<=k){
            if(a[j]==1){
                j++;
            }else if(a[j]==0){
               
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                i++;
                j++;
            }else{
               
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                k--;
            }
        }
        
    }
    
    
};
int main(){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
}