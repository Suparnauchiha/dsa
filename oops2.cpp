#include<iostream>
using namespace std;

               //encapsulation---------
/*               
class test{
    private:
    int a,b;
    public:
    test(){
        cout<<"enter a value";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }

    test(int x,int y){
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }

    test(test &obj){
        a=obj.a;
        b=obj.b;
        cout<<a<<" "<<b<<endl;
    }

};

*/

                  //compile-time polymorphism
class com_poly{
    public:
    void showinfo(int age){
        cout<<age<<endl;
    }
    void showinfo(string name){
        cout<<name<<endl;
    }
    void showinfo(double salary){
        cout<<salary<<endl;
    }
};

int main(){
    //test ob,ob2(10,20);
    //test ob3(ob2);

    com_poly obj;
    obj.showinfo(19);
    obj.showinfo("suparna");
    obj.showinfo(500000);


}