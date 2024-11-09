//Fibonacci Series

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
       int next_number = a + b;
       cout<<next_number<<" ";
       a = b;
       b = next_number;
    }
}
