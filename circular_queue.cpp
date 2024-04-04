#include<iostream>
using namespace std;

class cirqueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    cirqueue(int size){
        this->size=size;
        arr=new int[size];
        
        front=rear=-1;
    }

    int enqueue(int element){
        if((front == 0 && rear==size-1)|| (rear==(front-1)%(size-1) )){
            cout<<"queue is full, can't push";

        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
           
            
        }
        else{
            
            rear++;
        }
        arr[rear]=element;
        return arr[rear];


    }

    int dequeueu(){
        //if empty
        if(front==-1){
            cout<<"queue is empty"<<endl;
        }
        // age pop korbo then front++
        int ans=arr[front];
        cout<<"popped item"<<arr[front]<<" ";
        arr[front]=-1;

        //if single element pop kori
        if(front==rear){
            front=rear=-1;
        }
        //to maintain cyclic nature
        else if(front==size-1){
            front=0;
        }
        //for cyclic flow
        else{
            front++;
        }
        return ans;
        
        
    }

    void show(){
        int i;
    if (front==-1) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << "Front -> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % size){
        cout << arr[i]<<" ";
      }
      cout << arr[i];
      cout << endl
         << "Rear -> " << rear;
    }
    }
    
};

int main(){
    
   cirqueue q1(6); // Create an instance of the Queue class
    
    // Enqueue some elements
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    
    // Print the elements of the queue
    q1.show(); // This will print: 10 20 30
    
    return 0;
    


}