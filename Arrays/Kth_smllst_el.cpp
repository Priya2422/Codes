#include<iostream>
using namespace std;
int Kth(int *a,int max,int n,int k){
    int *H=new int[max+1];
    for(int i=0;i<max+1;i++){
        H[i]=0;
    }
    for(int i=0;i<n;i++){
        H[a[i]]++;
    }
    int el;
for(el=0;el<max+1;el++){
    if(H[el]>0){
        k--;
        if(k==0)break;
    }
}
return el;
}
int main(){
int n,k;
cin>>n;
cin>>k;
int *A=new int[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(A[i]>=max){
        max=A[i];
    }
}
int small=Kth(A,max,n,k);
cout<<small;
}