#include<iostream>
#include<vector>
using namespace std;

//tail recuresion
void getcounting_tail(int n){
    //base case
    if(n<=0)
    return;

    cout<<n<<" ";
    getcounting_tail(n-1);

}

//head recursion
void getcounting_head(int n){
    if(n==0)
    return;

    getcounting_head(n-1);
    cout<<n<<" ";
}
int getfactorial(int n){
    if(n<=1)
    return 1;

    int ans= n*getfactorial(n-1);
    return ans;
}

int fibonacci(int n){
    if(n==0||n==1)
    return n;

    
    return fibonacci(n-1)+fibonacci(n-2);
}

void printspell(int n,string str[]){
    if(n==0)
    return;

    printspell(n/10,str);
   
    cout<<str[n%10]<<" ";


}

int exp(int n){
    if(n==0)
    return 1;

    int chota_ans=exp(n/2);
    if(n&1){
        return 2*chota_ans*chota_ans;

    }
    else{
       return chota_ans*chota_ans;
    }


}

bool checksorted(vector<int> arr,int index){
    if(index>= arr.size()){
        return true;
    }
    if(arr[index]< arr[index-1]){
        return false;
    }

    return checksorted(arr,index+1);
}
int main(){
    // int n;
    // cout<<"enter no for counting:"<<endl;
    // cin>>n;

    // cout<<"counting :"<<endl;
    // getcounting_head(n);
    // cout<<endl;
    // getcounting_tail(n);
    // cout<<endl;

    // int n;
    // cin>>n;
    // cout<<"factorial of "<<n<<" is "<<getfactorial(n)<<endl;
    // cout<<"value of "<<n<<"th fibonacci is: "<<fibonacci(n)<<endl;

    // int n;
    // cout<<"enter the input :"<<endl;
    // cin>>n;
    // string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    // cout<<"answer: ";
    // printspell(n,str);

    // int n;
    // cin>>n;
    // cout<<"2 to the power "<<n<<" is "<<exp(n);

    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elemnets:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool answer=checksorted(arr,1);
    if(answer){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is unsorted";
    }




}