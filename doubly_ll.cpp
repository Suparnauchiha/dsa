#include<iostream>
using namespace std;

//class
class Node{
    public:
    Node* prev;
    Node* next;
    int data;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int lenght(Node* &head){
    int lenght=0;
    Node *temp=head;
    while(temp!=NULL){
        lenght++;
        temp=temp->next;

    }
    cout<<"lenght of linked list: "<<lenght<<endl;
    cout<<endl;
}
int main(){
    Node *node1=new Node(10);
    Node* head=node1;
    lenght(head);
    print(head);


}