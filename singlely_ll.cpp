#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; // next is a pointer , pointing address of Node

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL; // next address ke null korlam
    }
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for node with value-> "<<value<<" "<<endl;
    }
};

void inserathead(Node* &head,int data){
    //create bew node temp
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

}
void inseratTail(Node* &tail,int data){
    Node* temp=new Node(data);
    // now we have to coonect tail and temp
    tail->next=temp;
    tail=temp;

}

void insertposition(Node* &tail,Node* &head,int position,int data){
    //insert at start
    if(position==1){
        inserathead(head,data);
        return;
    }

    //traversal of node for count
    Node *temp=head; //traversal strat from head
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;//temp increment
        cnt++;//increase of cnt
    }

    //insert at tail
    while(temp->next==NULL){
        inseratTail(tail,data);
        return;
    }

    //creating node for insertation in middle
    Node* nodetoinsert=new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void print(Node* &head){
    //creating new node temp for printing purpose
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        //increase the temp by one address
        temp=temp->next;

    }
    cout<<endl;
}

void deleteNode(int position,Node* &head){
    //deleting 1st node
    if(position==1){
        Node* temp=head;// temp is keeping track of head
        head=head->next;
        temp->next=NULL; //memory free of 1st node
        delete temp;
    }
    else{
        Node* prev=NULL;
        Node* curr=head;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}


int main(){
    Node *node1=new Node(100);
    //cout<<"data of node 1: "<<node1->data<<endl;
   // cout<<"address of next node: "<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    //tail is node1 as it is single node
    Node* tail=node1;
    print(head);

    inserathead(head,1200);
    print(head);

    inseratTail(tail,100000);
    print(head);

    insertposition(tail,head,3,999999);
    print(head);
    insertposition(tail,head,2,7777);
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deleteNode(3,head);
    print(head);





}