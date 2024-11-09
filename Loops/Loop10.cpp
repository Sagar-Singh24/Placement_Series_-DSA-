#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    for(int i=0; i<=n; i+=2){
        cout<<i<<endl;
        if(i&1){
        continue;
       }
       i++;
    }
}