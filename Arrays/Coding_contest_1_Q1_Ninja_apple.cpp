#include<iostream>
#include<climits>
using namespace std;
long long appleAndCoupon(int n, int m, int *arr){

    int max=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>=max){
        max=arr[i];
    }
}
    int size=max+1;
    int *H=new int[size];
      for(int i=0;i<size;i++){
      H[i]=0;
    }
    for(int i=0;i<n;i++){
        H[arr[i]]++;
    }
    int el,in=0;
for(el=size-1;el>0;el--){
    if(H[el]>0){
        in=el;
        int count=H[in];
        while(count!=0){
            
        m--;
        count--;
        if(m==0)break;
        }
        if(m==0)break;
        
    }
}
   long long sum=0;
   int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==in && flag==0){
             flag=1;
            continue;
        }
            sum=sum+arr[i];
        
}
return sum;
}
int main(){
int n=13,k=9;
int A[n]={61,8,96,19,4,22,66,33,74,41,99,1,87};

cout<<appleAndCoupon(n,k,A);
}