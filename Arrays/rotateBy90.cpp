#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> temp(row,vector<int>(col,0));
        for(int i=0;i<col;i++){
            for(int j=0,m=row-1;m>=0 && j<row;){
                temp[i][m]=matrix[j][i];
                m--;j++;
            }
        }
           for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrix[i][j]=temp[i][j];
            }
        }
        
    }
};

int main(){
    vector<vector<int>> arr={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
Solution st;
   st.rotate(arr);
   for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
   }
}