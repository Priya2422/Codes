  #include<iostream>
  using namespace std;
   void first_Last_Occ(int *arr,int len,int k){
   int f=-1,l=-1;
   for(int i=0;i<len;i++){
       if(arr[i]==k){
           f=i;
           break;
       }
   }
       for(int i=0;i<len;i++){
       if(arr[i]==k){
           l=i;
       }
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