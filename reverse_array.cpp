#include<iostream>
using namespace std;
class Reverse{
    private:
    int size;
    int *ptr;
    public:
    Reverse(int s){
        size=s;
        ptr=new int[size];
    }
    void create();
    void rev();
    void dis();
};
void Reverse::create(){
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
}
void Reverse::rev(){
    int i=0,j=size-1;
    if(size==0){
        cout<<"Array empty"<<endl;
    }
    while(i<=j){
        int temp;
        temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        i++;
        j--;
    }
}
void Reverse::dis(){
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";
    }
}
int main(){
    int s;
    cin>>s;
    Reverse rt(s);
    rt.create();
    rt.dis();
    rt.rev();
    cout<<"\n";
    rt.dis();
}