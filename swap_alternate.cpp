#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }

    }
}

int main(){

    ///even case
    int even[8]={1,2,3,4,5,55,66,777};
    int odd[5]={22,33,44,55,66};

    swapalternate(even,8);
    printarray(even,8);

    swapalternate(odd,5);
    printarray(odd,5);

    return 0;
}