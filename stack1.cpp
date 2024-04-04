#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    int push(int element){
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
    return element;
}
    void pop(){
        if(top>=0){
            cout<<arr[top]<<"is popped from the stack";
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }

    }

    void peek(){
        cout<<"peek element is:";
        if(size-top>1){
            
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    bool isempty(){
        if(top>=0){
            return false;
        }
        else{
        return true;
        }
    }
    int show(){
        cout<<"the stack elements are:";
        for(int i=top;i>0;i--){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    stack st(8);
    st.push(388);
    st.push(6666);
    st.push(4);
    st.push(88);
    st.push(63);

    st.push(99);
    st.pop();
    cout<<endl;

    st.peek();
    st.show();
}

