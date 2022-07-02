  #include<iostream>
  using namespace std;
   void first_Last_Occ(int *arr,int len,int k){
   int f=-1,l=-1;
   int i=0,j=len-1;
    int mid=(i+j)/2;
    while(i<=j){
        if(arr[mid]==k){
            f=mid;
            j=mid-1;
        }
        else if(arr[mid]<k){
            i=mid+1;
        }else{
            j=mid-1;
        }mid=(i+j)/2;
    }i=0;j=len-1;mid=(i+j)/2;
       while(i<=j){
        if(arr[mid]==k){
            l=mid;
            i=mid+1;
        }
        else if(arr[mid]<k){
            i=mid+1;
        }else{
            j=mid-1;
        }mid=(i+j)/2;
    }
   cout<<"First Occ is:- "<<f<<" Last occ is:- "<<l<<endl;
   }
   int main(){
    int len;
    cin>>len;
    int arr[100];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    first_Last_Occ(arr,len,k);
   }