#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main(){
    /*
    int basic[3]={1,2,3};

    //array type int,of size 4---this is implemented by fixed size of static array
    array<int,4> a={1,2,3,4};
    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    // at -- to get items of a specific index
    cout<<"element at 2nd index-> "<<a.at(2)<<endl;

    cout<<"empty or not--> "<<a.empty()<<endl;

    //front--- to get first elemnt--back--to get last element
    cout<<"first element->"<<a.front()<<endl;
    cout<<"last element->"<<a.back()<<endl;


    //vector is like dynamic array-- if vector er size 4 ..in case of insering 5th element vector will double its size--- 8.55
    //jodi vector er size besi required hoy then sei vector arekta vector kore jar size double then sekhane value gulo copy kore dey--- dynamic
    //capacity: element er jonno koto ta space assign a6e
    vector<int> v;


    //size of the vector 5, vector 1 diye inisialize--
    vector<int> a1(5,1);
    cout<<"print a"<<endl;
    for(int i:a1){
        cout<<i<<" ";
    }
    cout<<endl;

    // copying elements of a in another vector--
    vector<int> last(a1);
    cout<<"after copying from a: ";
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"size->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;//capacity--2
    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;//capacity-- 4 cuz memory te jaiga 6ilo na to vector double memory pete new vector e 
    cout<<"size->"<<v.size()<<endl;
    cout<<"element at 2nd index"<<v.at(2)<<endl;
    cout<<"back->"<<v.back()<<endl;
    //printing vector
    cout<<"before pop:"<<endl;
    for(int i:v){ //datatype variable:vector
        cout<<i<<" "<<endl;
    }
    //size of vector will change after clear()
    cout<<"before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear: "<<v.size()<<endl;
    */

   ///dequeue----------
   /*
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    //d.pop_back();
    cout<<"print first index element: "<<d.at(1)<<endl;

    cout<<"front element: "<<d.front()<<endl;
    cout<<"back element: "<<d.back()<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;

    //erase
    cout<<"before erase:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase:"<<d.size();
    */

   //list-------- like doublely linked list--front and back e pointer thake--
/*
   list<int> l;

  

   //size 5, inialise with 100--
   list<int> n1(5,100);
   for(int i:n1){
    cout<<i<<" ";
   }cout<<endl;

   //inserting element
   l.push_back(1);
   l.push_front(2);

   for(int i:l){
    cout<<i<<" ";
   }
   cout<<endl;


    //copying list l
   list<int> n(l);
   for(int i:n){
    cout<<i<<" ";
   }cout<<endl;


   //erase
   l.erase(l.begin());
   cout<<"after erase: "<<endl;
   for(int i:l){
    cout<<i<<" ";
   }
   cout<<"size of list:"<<l.size();
   */

  //stack---------
/*
    stack<string> s;
    s.push("suparna");
    s.push("urmi");
    s.push("paul");

    cout<<"top element: "<<s.top()<<endl;
    s.pop();
    cout<<"after pop: "<<s.top()<<endl;

    cout<<"size: "<<s.size()<<endl;

*/

//queue--------
/*
    queue<string> q;
    q.push("suparna");
    q.push("urmi");
    q.push("paul");

    cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"after pop: "<<q.front()<<endl;
    */

   // priority queues-- 1st element everytime greatest--
   // max heap-- element ber hole maximum element e ber hoi
   /*
   //max-heap---
   priority_queue<int> maxi;
   //min-heap----
   priority_queue<int,vector<int>,greater<int>> mini;

   maxi.push(1);
   maxi.push(33);
   maxi.push(11);
   maxi.push(-2);
   cout<<"size-> "<<maxi.size()<<endl;
   int n=maxi.size();
   for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";//max element of max heap
    maxi.pop(); //max element will be popped
   }cout<<endl;

   mini.push(55);
   mini.push(1);
   mini.push(33);
   mini.push(11);
   cout<<"size-> "<<mini.size()<<endl;
   int m=mini.size();
   for(int i=0;i<m;i++){
    cout<<mini.top()<<" ";
    mini.pop();
   }cout<<endl;


*/

    //set-------unique elements store--in a sorted order--
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(1);

    for(auto i:s){ // The auto keyword in C++ automatically detects and assigns a data type to the variable with which it is used.
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;
    //erase--
    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;

    }cout<<endl;

    cout<<"5 present or not "<<s.count(5)<<endl;

    //find--returns iterartor if element is their
    set<int>::iterator itr=s.find(5);
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    //45.08

    //map==



















}