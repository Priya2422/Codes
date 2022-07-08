    #include<iostream>
    #include<vector>
using namespace std;
    int poss(int n, int m, vector<int> time,long long int mid){
    long long int timeSum=0;
    int stud=1;
    for(int i=0;i<m;i++){
      if(timeSum+time[i]<=mid){
          timeSum+=time[i];
      }  else{
          stud++;
          if(stud>n || time[i]>mid)return false;
          timeSum=time[i];
      }
    }
    return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	

        // Write your code here.
        long long int s=0;
        long long int sum=0;
       for(int i=0;i<m;i++){
           sum+=time[i];
       }
        long long int e=sum;
        long long int mid=s +((e-s)/2);
        while(s<=e){
            if(poss(n,m,time,mid)){
                e=mid-1;
            }else{
                s=mid+1;
            }
             mid=s +((e-s)/2);
        }
        return mid;
    }
int main(){
int n,m;
cin>>n;
cin>>m;
vector<int> A={2,2,3,3,4,4,1};

cout<<ayushGivesNinjatest(n,m,A);
}
