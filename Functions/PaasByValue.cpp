#include<iostream>
using namespace std;

void dummy(int n){
    cout<<" n is:"<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    dummy(n);

    return 0;
}