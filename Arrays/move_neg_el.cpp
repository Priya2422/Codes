#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]<0 && a[j]<0){
            i++;
        }else if(a[i]<0 && a[j]>=0){
            i++;
            j--;
        }else if(a[i]>=0 && a[j]<0){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++;j--;
        }else if(a[i]>=0 && a[j]>=0){
            j--;
        }
    }
        for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}