#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int *A=new int[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
int max=INT_MIN;
int min=INT_MAX;
for(int i=0;i<n;i++){
    if(A[i]>=max){
        max=A[i];
    }
    else if(A[i]<min){
        min=A[i];
    }
}
cout<<"Max: "<<max<<"\t"<<"Min: "<<min;
}