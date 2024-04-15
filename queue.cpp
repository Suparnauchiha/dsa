#include<iostream>
using namespace std;

class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
     
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    void show(){
        for(int i=qfront;i<rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    
};
    


int main(){
    
   Queue q1; // Create an instance of the Queue class
    
    // Enqueue some elements
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    
    // Print the elements of the queue
    q1.show(); // This will print: 10 20 30
    
    return 0;
    


}

