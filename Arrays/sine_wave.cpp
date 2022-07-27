#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ret;
    for(int i=0;i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                ret.push_back(arr[j][i]);
            }
        }
             else{
            for(int j=nRows-1;j>=0;j--){
                ret.push_back(arr[j][i]);
            }
        }
    }
    return ret;
}

int main(){
    vector<vector<int>> arr={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   vector<int> ret=wavePrint(arr,3,3);
   for(int i=0;i<ret.size();i++){
    cout<<ret[i]<<" ";
   }
}