#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<"Printing count from 1 to n"<<endl;
    for(int a=0,b=1,c=2; a>=0&&b>=1&&c>=2; a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
   
}