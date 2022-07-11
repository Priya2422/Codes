#include<iostream>
#include<vector>
using namespace std;
class Sol{
    public:
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    int k=n-1;
    while(k!=0){
        int i=0,j=1;
        while(j<=k){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
            i++,j++;
        }
        k--;
    }
}
};
int main(){
    vector<int> num={6,2,8,4,10};
    Sol st;
    st.bubbleSort(num,5);
    for(int i=0;i<5;i++){
        cout<<num[i]<<"\t";
    }
}