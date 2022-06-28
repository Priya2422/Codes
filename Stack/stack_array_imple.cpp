#include<iostream>
using namespace std;
class Stack{
    private:
    int top,size;
    int *A;
    public:
    Stack(int s){
        top=-1;
        size=s;
        A=new int[size];
    }
    int push(int data);
    int pop();
    int peek(int in);
    int stackTop();
    int isEmpty();
    int isFull();
    void dis();
};
int Stack::push(int data){
    if(top==size-1){
        return 1;
    }
    top++;
    A[top]=data;
    return 0;
}
int Stack::pop(){
    int x=-1;
    if(top==-1)return 1;
    x=A[top];
    top--;
    return x;
}
int Stack::peek(int in){
    if(in<0 || in>size-1)return -1;
    return A[top-in+1];
}
int Stack::stackTop(){
    if(top==-1 || top==size)return -1;
    return A[top];
}
int Stack::isEmpty(){
        if(top==-1)
        return 0;
        return 1;
}
int Stack::isFull(){
        if(top==size-1)
        return 0;
        return 1;
}
void Stack::dis(){
    if(top==-1)cout<<"Stack empty"<<endl;
    else{
    for(int i=0;i<=top;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Stack st(n);
    char ch;
    do{
        int sw;
        cout<<"Enter your choice: "<<endl;
        cin>>sw;
        switch (sw)
        {
        case 0:{ 
            int data;
            cout<<"Enter data to push: "<<endl;
            cin>>data;
            int x=st.push(data);
            if(x==1)cout<<"Stack full"<<endl;
            break;
        }
        case 1:{
            int y=st.pop();
            if(y==1)cout<<"Stack empty"<<endl;
            else cout<<"Deleted element is: "<<y<<endl;
            break;
        }
        case 2:{
        int pos;
        cout<<"Enter position: "<<endl;
        cin>>pos;
            int z=st.peek(pos);
            if(z==-1)cout<<"Invaild position"<<endl;
            else cout<<"Element at "<<pos<<" is"<<z;
            break;
        }
        case 3:{
            int p=st.stackTop();
            if(p==-1)cout<<"Invalid"<<endl;
            else cout<<"Top element is: "<<p<<endl;
            break;
        }
        case 4:{
            int q=st.isEmpty();
            if(q==1)cout<<"Stack not empty"<<endl;
            else cout<<"Stack empty"<<endl;
            break;
        }
        case 5:{
            int r=st.isFull();
            if(r==1)cout<<"Stack not full"<<endl;
            else cout<<"Stack full"<<endl;
            break;
        }
        case 6:{
            st.dis();
            break;
        }
        }
        cout<<"Do you want to continue? Enter N to exit"<<endl;
        cin>>ch;
    }while(ch!='N');
}