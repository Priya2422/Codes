#include<iostream>
using namespace std;
long long threeWaySplit(int n, int *arr){
    // Write your code here.
      int sum=0;
    int sumi=arr[0];
    int sumj=arr[n-1];
    int m=-1;
    int k=-1;
    int i=0,j=n-1;
    while(i<j){
        if(sumi==sumj){
            sum=sumi;
            m=i;k=j;
            i++;j--;
            sumi+=arr[i];
            sumj+=arr[j];
            
        }
        else if(sumi>sumj){
            j--;
            sumj+=arr[j];
        }
        else{
            i++;
            sumi+=arr[i];
        }
    }
    int retSum=0;
    while(m!=-1){
       retSum+=arr[m];
        m--;
    }
    return retSum;
}
int main(){
int n=13;
int A[n]={2,3,1,5};

cout<<threeWaySplit(n,A);
}