#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max=INT_MIN;

for(int i=0;i<n;i++){
    if(A[i]>=max){
        max=A[i];
    }
}
int *H=new int[max+1];
for(int i=0;i<max+1;i++){
    H[i]=0;
}
for(int i=0;i<n;i++){
    H[A[i]]++;
}
int j;
for(j=0;j<max+1;j++){
   if(H[j]>1){
    break;
   }
}
cout<<"Duplicate num is: "<<j;
}